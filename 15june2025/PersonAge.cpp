#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {
    private:
    string name;
    int age;
    public:
    void setValue( string namee, int agee)
    {
        name=namee;
        age=agee;
         
    }
    void getValue()
    {
        cout<< "The name of the person is " << name << " and" << " the age is "<< age << "." << endl;
    }
    

    // Complete the class

};

int main() {
     Person p;
     string name;
     int age;
    cin>> name >> age;
    
     p.setValue(name,age);
     p.getValue();
    //Write your code here

    return 0;
}