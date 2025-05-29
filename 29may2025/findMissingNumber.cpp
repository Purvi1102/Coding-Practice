#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size_of_array;
    cout<< "enter size of array :";
    cin>> size_of_array;
    vector<int> arr(size_of_array);
    int sum2=0;
    for(int i=0;i<size_of_array-1;i++)
    {
        cin>> arr[i];
        sum2+=arr[i];
    }
    int sum=(size_of_array*(size_of_array+1))/2;
    int ans=sum-sum2;
    cout<< "missing number is : " << ans;

}