#include <iostream>
#include "Book.h"
#include <string>
#include <cstring>

using namespace std;
    Book::Book()
    {
        setCountPage(0);
    }
    Book::Book(const string *name, const string *author, int countPage)
    {
        this->name=*name;
        this->author=*author;
        if(!setCountPage(countPage)) setCountPage(0);
    }

    Book::Book(const Book &otherBook)
    {
        this->name=otherBook.name;
        this->author=otherBook.author;
        this->countPage=otherBook.countPage;
    }
    void Book::print()
    {
        cout << "Name: " << name << "\nAuthor: " << author << "\nNumber of pages: " << countPage << endl;
    }

    bool Book::setName(const string *name)
    {
        this->name=*name;
        return 1;
    }

    bool Book::setAuthor(const string *author)
    {
        this->author=*author;
        return 1;
    }

    bool Book::setCountPage(const int countPage)
    {
        if (countPage<0) return 0;
        this->countPage=countPage;
        return 1;
    }

    string Book::getName()
    {
        return name;
    }

    string Book::getAuthor()
    {
        return author;
    }

    int Book::getCountPage()
    {
        return countPage;
    }

    Book & Book::operator = (const Book &book)
    {
        if (this == &book)
        return *this;
        this->name=book.name;
        this->author=book.author;
        this->countPage=book.countPage;
        return *this;
    }

    bool operator == (Book a, Book b)
    {
        int c1=a.getCountPage();
        int c2=b.getCountPage();
        string a1=a.getAuthor();
        string a2=b.getAuthor();
        string n1=a.getName();
        string n2=b.getName();
        if ((c1==c2)&&(n1==n2)&&(a1==a2)) return 1;
        else return 0;
    }

    bool operator != (Book a, Book b)
    {
        return !(a==b);
    }

    bool operator < (Book a, Book b)
    {
        string n1=a.getName();
        string n2=b.getName();
        if (n1<n2) return 1;
        else return 0;
    }

    bool operator > (Book a, Book b)
    {
        string n1=a.getName();
        string n2=b.getName();
        if (n1>n2) return 1;
        else return 0;
    }

    bool operator <= (Book a, Book b)
    {
        if((a<b)||(a==b)) return 1;
        else return 0;
    }

    bool operator >= (Book a, Book b)
    {
        if((a>b)||(a==b)) return 1;
        else return 0;
    }

    std::ostream& operator << (std::ostream &out, const Book &book)
    {
        out << "Name: " << book.name << ", " << "Author: " << book.author << ", " << "Number of pages: " << book.countPage;
        return out;
    }

    std::istream& operator >> (std::istream &in, Book &book)
    {
        in >> book.name;
        in >> book.author;
        in >> book.countPage;
        return in;
    }
