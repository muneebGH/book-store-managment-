#ifndef MEDIA_H
#define MEDIA_H
#include<iostream>
#include"CString.h"
using namespace std;
class Media
{
protected:
	CString title;
public:
	Media(CString t);
	Media();
	virtual Media * getCopy()=0;
	virtual void display() = 0;
	virtual ~Media();
};
#endif // !MEDIA_H
