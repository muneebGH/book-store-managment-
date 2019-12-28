#include"CD.h"
CD::CD(CString n,int c):Media(n)
{
	if (c > 0)
	{
		capacity = c;
	}
	else
	{
		capacity = 0;
	}
}

CD::CD():Media("not set")
{
	capacity = 0;
}

void CD::display()
{
	cout << "CD name : "; title.display();
	cout << "capacity in MBs : " << capacity << endl;

}

CD::~CD()
{

}


CD * CD::getCopy()
{
	return new CD(*this);
}