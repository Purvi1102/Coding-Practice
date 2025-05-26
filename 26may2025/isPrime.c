#include <stdio.h>
#include<math.h>
int main()
{
    int number;
    printf("enter the number : ");
    scanf("%d", &number);
    int check = 0;
    if(number <= 1) check = 1; 
    int i = 2;
    while (i <= sqrt(number))
    {
        if (number % i == 0)
        {
            check = 1;
            break;
        }
        i++;
    }
    if (check == 0)
    {
        printf("%d is a prime number ", number);
    } else printf("%d is not a prime number", number);
}