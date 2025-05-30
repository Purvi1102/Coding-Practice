#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    Book(string title, string author)
    {
        this->title = title;
        this->author = author;
    }
    void display()
    {
        cout<< "title of book "<< this->title << " and author is " << this->author;
    }
};
int main()
{
    Book  mybook("abc" , "purvi");
    mybook.display();
}