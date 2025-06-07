#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int size_of_array1;
    cout << "enter size of array 1 :";
    cin >> size_of_array1;
    vector<int> arr1(size_of_array1);
    for (int i = 0; i < size_of_array1; i++)
    {
        cin >> arr1[i];
    }
    vector<int> arr2(size_of_array1);
    for (int i = 0; i < size_of_array1; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int n = size_of_array1;
    int i = 0, j = 0;
    int count = 0, maxi = 0;

    while (i < n && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            count++;
            maxi = max(maxi, count);
            i++;
        }
        else
        {
            count--; // this says 1 platform is free so you can add another train
            j++;
        }
    }
    cout<< maxi;
}