#include <iostream>
#include <vector>
#include <unordered_set>
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
    unordered_set<int> s;
    vector<int> ans;
    for (int i : arr)
    {
        if (s.find(i) == s.end())
        {
            ans.push_back(i);
            s.insert(i);
        }
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}