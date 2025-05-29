#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    string str1;
    unordered_map <int,int> mp;
    cin >> str1;
    for(char c: str1) mp[c]++;
    for(char c: str1)
    {
        if(mp[c]==1) 
        {
            cout<< "first non repeating character is :" << c;
            break;
        } 
    }
}