#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int size_of_array1;
    cout << "enter size of array 1 :";
    cin >> size_of_array1;
    vector<int> arr(size_of_array1);
    for (int i = 0; i < size_of_array1; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter value of x :";
    cin >> x;
    sort(arr.begin(), arr.end());
    int i = 0, j = 1;
    int p = 0;
    while (i < arr.size() && j < arr.size())
    {
        if (i != j && arr[j] - arr[i] == x)
        {
            cout << "true";
            p=1;
            break;
        }
        else if (arr[j] - arr[i] < x)
            j++;
        else
            i++;
    }
    if (p == 0)
        cout << "false";
}
