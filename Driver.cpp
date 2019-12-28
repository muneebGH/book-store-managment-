#include"Book.h"
#include"Magazine.h"
#include"CD.h"
#include"Shelf.h"
int main()
{

	int size;
	int choice;
	cout << "enter size" << endl;
	cin >> size;
	Shelf s1(size);




	for (int i= 0; i < size; i = i + 1)
	{
		cout << "press 1 for book and 2 for magazine 3 for CD" << endl;
		cin >> choice;
		if (choice == 1)
		{
			CString nBook;
			CString an;
			CString isbn;
			cin.ignore();
			cout << "enter name" << endl;
			nBook.input();
			cout << "enter author name" << endl;
			an.input();
			cout << "enter isbn" << endl;
			isbn.input();
			Media * p = new Book(nBook, an, isbn);
			s1.insert(p);
		}
		else if (choice == 2)
		{
			CString n;
			CString m;
			int y;
			cin.ignore();
			cout << "enter name" << endl;
			n.input();
			cout << "enter month" << endl;
			m.input();
			cout << "enter year" << endl;
			cin >> y;
			Media * p = new Magazine(n, m, y);
			s1.insert(p);

		}
		else if (choice == 3)
		{
			CString n;
			int cap;
			cin.ignore();
			cout << "enter name " << endl;
			n.input();
			cout << "enter capacity " << endl;
			cin >> cap;
			Media * p = new CD(n, cap);
			s1.insert(p);

		}
		else
		{
			cout << "invalid input" << endl;
			i = i - 1;
		}
	}

	
	s1.displayContents();

	system("pause");
	return 0;
}