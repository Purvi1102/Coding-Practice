#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
int main()
{
    int size_of_array1;
    cout << "enter size of array 1 :";
    cin >> size_of_array1;
    vector<int> banned(size_of_array1);
    for (int i = 0; i < size_of_array1; i++)
    {
        cin >> banned[i];
    }
    int n;
    cout<< "enter value of n: ";
    cin>> n;
    int maxSum;
    cout<< "enter value of maxSum: ";
    cin>> maxSum ;
    unordered_map<int,int> mp;
        for(int i: banned) mp[i]++;
        int sum=0;
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)==mp.end() && sum+i<=maxSum) 
            {
                sum+=i;
                count++;
            }
        }
        cout<< count;
    }

