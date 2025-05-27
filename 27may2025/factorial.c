#include <stdio.h>
int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    int i = number;
    int ans = 1;
    if (number == 0)
        ans = 1;
    while (i > 0)
    {
        ans *= i;
        i--;
    }
    printf("factorial of %d is : %d", number, ans);
    return 0;
}