#ifndef CD_H
#define CD_H
#include"Media.h"
class CD:public Media
{
private:
	int capacity;
public:
	CD(CString name, int c);
	CD();
	void display();
	~CD();
	CD * getCopy();


};
#endif // !CD_H
