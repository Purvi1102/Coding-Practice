#include<iostream>

using namespace std;
int main()
{
    int num1;
    cout<< "enter the number : ";
    cin>> num1;
    int num3=num1;
    int sum=0;
    while(num1>0)
    {
        int rem=num1%10;
        sum+=rem;
        num1=num1/10;
    }

    cout<< " Sum of digits of " << num3 << " is : " << sum ;
    return 0;
    
}
