#include <string>

using namespace std;
class Book
{
private:
    string name;
    string author;
    int countPage;
public:
    Book();
    Book(const string *name, const string *author, int countPage);
    Book(const Book &book);
    void print();
    bool setName(const string *name);
    bool setAuthor(const string *author);
    bool setCountPage(const int countPage);
    string getName();
    string getAuthor();
    int getCountPage();
    Book & operator = (const Book &book);
    friend bool operator == (Book a, Book b);
    friend bool operator != (Book a, Book b);
    friend bool operator < (Book a, Book b);
    friend bool operator > (Book a, Book b);
    friend bool operator <= (Book a, Book b);
    friend bool operator >= (Book a, Book b);
    friend std::ostream& operator << (std::ostream &out, const Book &book);
    friend std::istream& operator >> (std::istream &in, Book &book);
};
