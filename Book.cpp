#include"Book.h"
Book::Book(CString n, CString an, CString isbn):Media(n),authorName(an),ISBN(isbn)
{

}

Book::Book():authorName("not set"),ISBN("not set")
{

}

void Book::display()
{
	cout << "book title  :"; title.display();
	cout << "author name :"; authorName.display();
	cout << "ISBN :"; ISBN.display();

}

Book::~Book()
{

}

Book * Book::getCopy()
{
	return new Book(*this);
}