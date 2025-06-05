#include<iostream>
#include<vector>
using namespace std;
int check(vector<int>& arr, int bound)
    {
        int count=0;
        int curr=0;
        for(int i: arr)
        {
            if(i<=bound) curr++;
            else curr=0;
            count+=curr;
        }
        return count;
    }
int main()
{
    int size_of_array;
    cout<< "enter the size of array: ";
    cin>> size_of_array;
    vector<int> arr(size_of_array);
    for(int i=0;i<size_of_array;i++)
    {
        cin>> arr[i];
    }
    int left;
    int right;
    cout<< "enter left :";
    cin>> left;
    cout<< " enter right :";
    cin>> right;
    int k= check(arr,right)-check(arr,left-1);
    cout<< k<< endl;

}