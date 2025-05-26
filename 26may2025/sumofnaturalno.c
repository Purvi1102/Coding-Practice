#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int i=1;
    int sum=0;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}