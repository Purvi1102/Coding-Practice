#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    int size_of_array1;
    cout<< "enter size of array 1 :";
    cin>> size_of_array1;
    vector<int> arr1(size_of_array1);
    int size_of_array2;
    cout<< "enter size of array 2 :";
    cin>> size_of_array2;
    vector<int> arr2(size_of_array2);
    for(int i=0;i<size_of_array1;i++)
    {
        cin>> arr1[i];
    }
    for(int i=0;i<size_of_array2;i++)
    {
        cin>> arr2[i];
    }
    unordered_set<int> s1(arr1.begin(),arr1.end());
    unordered_set<int>s2(arr2.begin(),arr2.end());
    for(auto i: s1)
    {
        if(s2.find(i)!=s2.end()) cout<< " " << i << endl;
    }
    
}