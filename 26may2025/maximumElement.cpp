#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array";
    cin>> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    int maxi=0;
    for(int i : arr)
    {
        if(i>maxi) maxi=i;
    }
    cout<< "maximum element of array "<<maxi;
    return 0;

}