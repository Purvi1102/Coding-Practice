#include<stdio.h>
int main()
{
    int number;
    printf("enter the number : ");
    scanf("%d", &number);
    int ans=0;
    int i=number;
    while(number>0)
    {
        int m= number%10;
        ans+=m*m*m;
        number=number/10;
    }
    if(ans==i) printf(" %d is an armstrong number " , i);
    else printf(" %d is not an armstrong number ", i);
    return 0;

}