#include<stdio.h>
int main()
{
    int number;
    printf("enter the number :");
    scanf("%d", &number);
    int i=0;
    int a=0;
    int b=i+1;
    printf("%d ",a);
    printf("%d", b);
    while(i<number-2)
    {
        int c=a+b;
        printf(" %d", c);
        a=b;
        b=c;
        i++;
    }
    return 0;

}