#include<iostream>
#include<vector>
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
    int maxisum=arr[0];
    int currentsum=arr[0];
    for(int i=1;i<size_of_array;i++)
    {
        if(currentsum+arr[i]>arr[i]) currentsum=currentsum+arr[i];
        else currentsum=arr[i];
        if(currentsum>maxisum) maxisum=currentsum;
    }
    cout<< "maximum sum of subarray: " << maxisum;
}