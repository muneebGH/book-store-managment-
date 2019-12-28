#ifndef MAGAZINE_H
#define MAGAZINE_H
#include"Media.h"
class Magazine:public Media
{
private:
	CString month;
	int year;
public:
	Magazine(CString n, CString m, int y);
	Magazine();
	void display();
	Magazine * getCopy();
	~Magazine();
};
#endif // !MAGAZINE_H
