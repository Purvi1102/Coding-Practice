#include<stdio.h>
int main()
{
    int number;
    printf("enter the number : ");
    scanf("%d", &number);
    int c=number;
    int ans=0;
    while(number>0)
    {
        int rem=number%10;
        ans=ans*10+rem;
        number=number/10;
    }
    printf("reverse of %d : %d" , c, ans);
}