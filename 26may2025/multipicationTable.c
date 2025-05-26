#include <stdio.h>
int main()
{
    int n;
    printf("enter whose table you want to print:");
    scanf("%d", &n);
    int i = 1;
    while (i <= 10)
    {
        int ans = n * i;
        printf("%d*%d = %d\n", n, i, ans);
        i++;
    }
    return 0;
}