#include<stdio.h>
int main()
{
    char arr[30];
    for(int i=0;i<30;i++)
    {
        scanf("%c",&arr[i]);
    }
    int count=0;
    for(int i=0;i<30;i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u') count++;
    }
    printf(" number of vowels in given string %d" ,count);
    return 0;

    
}