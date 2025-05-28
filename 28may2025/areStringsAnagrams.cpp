#include<iostream>
#include<string.h>
#include<unordered_map>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout<< "enter string 1 and string 2:";
    cin>> str1 >> str2;
    int flag=0;
    if(str1.length()!=str2.length())
    {
        flag=1;
        cout<<" strings are not anagrams";
    }
    else 
    {
        unordered_map<char,int> mp;
        for(char c : str1) mp[c]++;
        for(char i: str2)
        {
            if(mp.find(i)!=mp.end()) mp[i]--;
        }
        for(auto i: mp)
        {
            if(i.second>0)
            {
                flag=1;
                cout<< " strings are not anagrams";
            }
        }
        if(flag==0) cout<<"strings are anagrams";
    }
}