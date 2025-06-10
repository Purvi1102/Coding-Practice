#include<iostream>
#include<string.h>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cout<< "enter string 1 :";
    cin>> s;
    long long count=0;
        long long zeros=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='0') zeros++;
            else count+=zeros;
        }
        cout<< count;
}