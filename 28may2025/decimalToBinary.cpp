#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    string binaryNumber = "";
    while(number>0)
    {
        int c=number%2;
        binaryNumber += to_string(c);
        number=number/2;
    }
    reverse(binaryNumber.begin(), binaryNumber.end());
    cout << binaryNumber;
    return 0;
}