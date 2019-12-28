#ifndef SHELF_H
#define SHELF_H
#include"Media.h"
class Shelf
{
private:
	Media ** items;
	int maxSize;
	int currSize;
public:
	Shelf(int ms);
	void insert(Media * p);
	void displayContents();
	~Shelf();
};
#endif // !SHELF_H
