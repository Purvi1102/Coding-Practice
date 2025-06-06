#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    int size_of_array;
    cout<<"enter size of array :";
    cin>> size_of_array;
    vector<int>arr(size_of_array);
    for(int i=0;i<size_of_array;i++)
    {
        cin>> arr[i];
    }
    int p=0;
     unordered_set<int> s;
        for(int i: arr)
        {
            s.insert(i);
        }
        for(int i=1;i<=size_of_array+1;i++)
        {
            if(s.find(i)==s.end()) 
            {
                cout<< i;
                p=1;
                break;
            }
        }
        if(p==0) cout<< 1;
        
}