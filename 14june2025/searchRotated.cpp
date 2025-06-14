#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    int size_of_array1;
    cout << "enter size of array 1 :";
    cin >> size_of_array1;
    int target;
    cout<< "enter target :";
    cin>> target;
    vector<int> nums(size_of_array1);
    for (int i = 0; i < size_of_array1; i++)
    {
        cin >> nums[i];
    }
    unordered_set<int> s;
        for(int i: nums)
        {
            s.insert(i);
        }
        if(s.find(target)!=s.end())
        {
            cout<< "true";
        }
        else cout<< "False";

}