#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size_of_array;
    cout<<"enter the size: ";
    cin>> size_of_array;
    vector<int> arr(size_of_array);
    for(int i=0;i<size_of_array;i++)
    {
        cin>> arr[i];
    }
    for(int i=0;i<size_of_array-1;i++)
    {
        swap(arr[i],arr[i+1]);
    }
    for(int i:arr)
    {
        cout<< i << " " ;
    }
    return 0;
}