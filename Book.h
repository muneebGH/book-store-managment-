#ifndef  BOOK_H
#define BOOK_H
#include"Media.h"
class Book:public Media
{
	CString authorName;
	CString ISBN;
public:
	Book(CString n,CString an, CString isbn);
	Book();
	void display();
	Book * getCopy();
	~Book();

};
#endif // ! BOOK_H
