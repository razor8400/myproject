#include "ObjectsProvider.h"
#include "Strategy.h"

ObjectsProvider& ObjectsProvider::Instance()
{
	static ObjectsProvider instance;
	return instance;
}

ObjectsProvider::ObjectsProvider()
{

}

