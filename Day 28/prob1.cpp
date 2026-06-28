/*Write a program to Create library management system*/
#include <iostream>
using namespace std;
struct library
{
    string bookname;
    string status;
    string bookid;
    string author;
};

int main()
{
    int n;
    cout << "Enter number of books :";
    cin >> n;
    library record[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Enter book id : ";
        getline(cin, record[i].bookid);

        cout << "Enter book name";
        getline(cin, record[i].bookname);

        cout << "Enter author name : ";
        getline(cin, record[i].author);

        cout << "Enter Book status : ";
        getline(cin, record[i].status);
    }
    cout << "                              LIBRARY RECORD                                   " << endl;
    cout << " BOOK ID            BOOKNAME                  AUTHOR              STATUS       " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << record[i].bookid << "         " << record[i].bookname << "             " << record[i].author << "         "
             << record[i].status << "       " << endl;
    }

    return 0;
}