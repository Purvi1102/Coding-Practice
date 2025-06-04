#include <iostream>
using namespace std;
class base
{
public:
    void show()
    {
        cout << "hello" << endl;
    }
};
class derive : public base
{
    public:
    void display()
    {
        cout << "this is derive class";
    }
};
int main()
{
    derive obj;
    obj.show();
    obj.display();
}