#include <stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}