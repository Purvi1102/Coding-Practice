#include <iostream>
#include <string>
using namespace std;

class marks
{
private:
    string name;
    int markss;

public:
    marks(string name, int marks)
    {
        this->name = name;
        this->markss = marks;
    }
    void display()
    {
        cout << this->name << " got " << this->markss << " marks " << " out of 100";
    }
};
int main()
{
    marks mark("purvi", 98);
    mark.display();
}