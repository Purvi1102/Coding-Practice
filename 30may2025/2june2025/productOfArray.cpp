#include <iostream>
#include <vector>
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
    vector<int> ans;
    for (int i = 0; i < size_of_array; i++)
    {
        int pro = 1;
        for (int j = 0; j < size_of_array; j++)
        {
            if (i != j)
                pro *= arr[j];
        }
        ans.push_back(pro);
    }
    for (int i : ans)
    {
        cout << " " << i;
    }
    return 0;
}