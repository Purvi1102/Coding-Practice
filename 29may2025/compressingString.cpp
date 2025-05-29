#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    cout<< "enter the string: ";
    cin>> str1;
    int count=1;
    string ans;
    for(int i=0;i<length_of_string-1;i++)
    {
        if(str1[i]==str1[i+1]) count++;
        else 
        {
            ans.push_back(str1[i]);
            string c=to_string(count);
            ans+= c;
            count=1;
        }
    }
    if(str1[length_of_string-1]!=str1[length_of_string-2]) 
    {
        ans+=str1[length_of_string-1];
        ans+="1";
    }
    cout<< "compressed string is :" << ans;

}