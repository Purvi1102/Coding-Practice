#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int a)
{
    int i=2;
    while(i<=sqrt(a))
    {
        if(a%i==0) return false;
        i++;
    }
    return true;
}
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d" , &number);
    int i=2;
    while(i<=number)
    {
        if(isPrime(i)) printf(" %d ", i);
        i++;
    }
    return 0;
}