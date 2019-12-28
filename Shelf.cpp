#include"Shelf.h"
Shelf::Shelf(int ms)
{
	if (ms > 0)
	{
		maxSize = ms;
		items = new Media * [maxSize];
	}
	else
	{
		maxSize = 0;
		items = nullptr;
	}
}

void Shelf::insert(Media * p)
{
	if (currSize < maxSize)
	{
		items[currSize] = p->getCopy();
		currSize = currSize + 1;
	}

}

void Shelf::displayContents()
{
	for (int i = 0; i < currSize; i = i + 1)
	{
		items[i]->display();
	}
}

Shelf::~Shelf()
{

	for (int i = 0; i < maxSize; i = i + 1)
	{
		delete items[i];
	}

	delete[] items;
	items = nullptr;
}