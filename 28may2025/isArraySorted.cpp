#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size_of_array;
    vector<int>arr(size_of_array);
    cout<<"enter size of array :";
    cin>> size_of_array;
    for(int i=0;i<size_of_array;i++)
    {
        cin>> arr[i];
    }
    bool  ans=true;
    for(int i=1;i<size_of_array;i++)
    {
        if(arr[i]<arr[i-1])
        {
            ans=false;
            break;
        }
    }
    if(ans==true) cout<< "array is sorted ";
    else if(ans==false) cout<< "array is not sorted";
}