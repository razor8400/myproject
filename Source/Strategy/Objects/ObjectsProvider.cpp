#include "ObjectsProvider.h"

ObjectsProvider& ObjectsProvider::Instance()
{
	static ObjectsProvider instance;
	return instance;
}

ObjectsProvider::ObjectsProvider()
{

}

