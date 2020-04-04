#include <iostream>
#include "Book.h"
#include <string>
#include <stdlib.h>


using namespace std;


void PrintAll(Book *books)
{
    for (int j=0; j<3; j++)
        books[j].print();
    cout << endl;
}


void ShowNewMenu()
{
    cout << "\t\t***New Menu!***" << endl;
    cout << "1)Operator =" << endl;
    cout << "2)Operator ==" << endl;
    cout << "3)Operator !=" << endl;
    cout << "4)Operator <" << endl;
    cout << "5)Operator >" << endl;
    cout << "6)Operator <=" << endl;
    cout << "7)Operator >=" << endl;
    cout << "8)Show the list of all books" << endl;
    cout << "Choose one of the numbers(type in 0 to stop the program): ";
}


int main()
{
    int var,x,y;
    cout << "Fill in 3 books:" << endl;
    Book books[3];
    for (int i=0; i<3; i++)
    {
        cout << endl;
        cin >> books[i];
    }
    cout << "Now I will show you what you've entered:\n" << endl;
    for (int i=0; i<3; i++)
        cout << books[i] << "\n" << endl;
    cout << "It's time for..." << endl;
    ShowNewMenu();
    while(true)
 {
    cin >> var;
    cout << endl;
    switch(var)
    {
    case 0:
        {
            return 0;
        }
    case 1:
        {
            cout << "\nType in the book number you want to change with =: ";
            cin >> x;
            while ((x>3)||(x<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> x;
            }
            cout << "\nType in the book number you want the first book to turn into: ";
            cin >> y;
            while ((y>3)||(y<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> y;
            }
            books[x-1]=books[y-1];
            cout << "\nChange successful.\n";
            break;
        }
    case 2:
        {
            cout << "\nType in the first book number you want to compare: ";
            cin >> x;
            while ((x>3)||(x<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> x;
            }
            cout << "\nType in the second book number you want to compare: ";
            cin >> y;
            while ((y>3)||(y<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> y;
            }
            if (books[x-1]==books[y-1]) cout << "\nThey are the same!\n";
            else cout << "\nThey are different.\n";
            break;
        }
    case 3:
        {
            cout << "\nType in the first book number you want to compare: ";
            cin >> x;
            while ((x>3)||(x<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> x;
            }
            cout << "\nType in the second book number you want to compare: ";
            cin >> y;
             while ((y>3)||(y<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> y;
            }
            if (books[x-1]!=books[y-1]) cout << "\nThey are different.\n";
            else cout << "\nThey are the same!\n";
            break;
        }
    case 4:
        {
            cout << "\nType in the first book number you want to compare: ";
            cin >> x;
            while ((x>3)||(x<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> x;
            }
            cout << "\nType in the second book number you want to compare: ";
            cin >> y;
             while ((y>3)||(y<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> y;
            }
            if (books[x-1]<books[y-1]) cout << "\nThe first book comes first in the alphabetical order.\n";
            else cout << "\nThe first book comes later in the alphabetical order or has the same name as the second one.\n";
            break;
        }
    case 5:
        {
            cout << "\nType in the first book number you want to compare: ";
            cin >> x;
            while ((x>3)||(x<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> x;
            }
            cout << "\nType in the second book number you want to compare: ";
            cin >> y;
             while ((y>3)||(y<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> y;
            }
            if (books[x-1]>books[y-1]) cout << "\nThe first book comes later in the alphabetical order.\n";
            else cout << "\nThe first book comes later in the alphabetical order or has the same name as the second one.\n";
            break;
        }
    case 6:
        {
            cout << "\nType in the first book number you want to compare: ";
            cin >> x;
            while ((x>3)||(x<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> x;
            }
            cout << "\nType in the second book number you want to compare: ";
            cin >> y;
             while ((y>3)||(y<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> y;
            }
            if (books[x-1]<=books[y-1]) cout << "\nThe first book comes first in the alphabetical order or both books are the same.\n";
            else cout << "\nThe first book comes later in the alphabetical order.\n";
            break;
        }
    case 7:
        {
            cout << "\nType in the first book number you want to compare: ";
            cin >> x;
            while ((x>3)||(x<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> x;
            }
            cout << "\nType in the second book number you want to compare: ";
            cin >> y;
             while ((y>3)||(y<1))
            {
                cout << "\nIncorrect number. Try again: ";
                cin >> y;
            }
            if (books[x-1]>=books[y-1]) cout << "\nThe first book comes later in the alphabetical order or both books are the same.\n";
            else cout << "\nThe first book comes later in the alphabetical order.\n";
            break;
        }
    case 8:
        {
            PrintAll(books);
            break;
        }
    default:
        {
            cout << "\nIncorrect number.";
            break;
        }
    }
    ShowNewMenu();
 }
}
