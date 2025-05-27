#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<< "enter the number: ";
    cin>> number;
    int c=number;
    int ans=0;
    while(number>0)
    {
        int rem=number%10;
        ans= ans*10 + rem;
        number=number/10;   
    }
    if(ans==c) cout<< c << " is a palindrome";
    else  cout<< c<< " is not a palindrome";
}