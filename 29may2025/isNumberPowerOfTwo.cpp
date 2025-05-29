#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number;
    cout<< " enter the number :";
    cin>> number;
    if((number &(number-1))==0) cout<< number << " is power of 2";
    else cout<< number <<  " is not power of 2";
}