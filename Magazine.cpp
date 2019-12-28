#include"Magazine.h"
Magazine::Magazine(CString n, CString m, int y):Media(n),month(m)
{
	if (y > 0)
	{
		year = y;
	}
	else
	{
		y = 0;
	}
}

Magazine::Magazine():Media("not set"),month("not set")
{
	year = 0;
}

void Magazine::display()
{
	cout << "magazine title : "; title.display();
	cout << "magazine month : "; month.display();
	cout <<"magazine year : "<<year<<endl;
}

Magazine::~Magazine()
{

}

Magazine * Magazine::getCopy()
{
	return new Magazine(*this);
}