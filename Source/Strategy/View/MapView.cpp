// Fill out your copyright notice in the Description page of Project Settings.

#include "MapView.h"
#include "BuildingView.h"

 // Sets default values
AMapView::AMapView()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMapView::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMapView::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector2D AMapView::GetFreeTile(const FVector2D& Tile) const
{
    std::vector<FVector2D> open_tiles;
    std::vector<FVector2D> closed_tiles;
    
    open_tiles.push_back(Tile);
    
    do
    {
        for (auto tile: open_tiles)
        {
            if (GetViewAtTile(tile))
                continue;

            return tile;
        }
        
        std::vector<FVector2D> tiles = open_tiles;
        
        open_tiles.clear();
        
        for (auto tile: tiles)
        {
            auto neighbours = GetNeighbours(tile);
            
            for (auto neighbour : neighbours)
            {
                auto it = std::find(closed_tiles.begin(), closed_tiles.end(), neighbour);
                
                if (it != closed_tiles.end())
                    continue;
                
                open_tiles.push_back(neighbour);
            }
            
            closed_tiles.push_back(tile);
        }
    }
    while(open_tiles.size() > 0);

    return Tile;
}

std::vector<FVector2D> AMapView::GetNeighbours(const FVector2D& Tile) const
{
    std::vector<FVector2D> neighbours;
    
    for (int i = 0; i < grid::neighnours_count; ++i)
    {
        auto neighnour = Tile + FVector2D(grid::neighnours[i][0], grid::neighnours[i][1]);
        
        if (TileInMap(neighnour))
            neighbours.push_back(neighnour);
    }
    
    return neighbours;
}
            
ABuildingView* AMapView::GetViewAtTile(const FVector2D& Tile) const
{
    auto view = Buildings.FindByPredicate([Tile](ABuildingView* view)
    {
        return Tile >= view->Tile && Tile < view->Tile + view->Size;
    });
    
    if (view)
        return *view;
    
    return nullptr;
}
            
bool AMapView::TileInMap(const FVector2D& Tile) const
{
    return Tile.X >= 0 && Tile.X <= MapSize.X && Tile.Y >= 0 && Tile.Y <= MapSize.Y;
}

FVector2D AMapView::GetMapSize() const
{
	return MapSize * TileSize;
}

FVector AMapView::ConvertTileToWorld(const FVector2D& Tile) const
{
	auto x = Tile.Y * TileSize.Y;
	auto y = Tile.X * TileSize.X;
	
	auto size = GetMapSize() / 2;

	return FVector(x - size.Y, y - size.X, 0);
}

FVector2D AMapView::ConvertWorldToTile(const FVector& World) const
{
    auto size = GetMapSize() / 2;
    
    auto x = (World.Y + size.Y) / TileSize.Y;
    auto y = (World.X + size.X) / TileSize.X;
    
    return FVector2D(round(x), round(y));
}

