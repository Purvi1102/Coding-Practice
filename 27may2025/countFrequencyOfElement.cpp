#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int size_of_array;
    cout << "enter size of array :";
    cin >> size_of_array;
    vector<int> arr(size_of_array);
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    for (int i : arr)
    {
        mp[i]++;
    }
    for (auto i : mp)
    {
        cout << i.first << " : " << i.second << endl;
    }
    return 0;
}