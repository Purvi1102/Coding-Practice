#include<iostream>
#include<vector>
using namespace std;
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
    int target;
    cout<< "enter the target value :";
    cin>> target;
    for(int i=0;i<size_of_array;i++)
    {
        for(int j=i+1;j<size_of_array;j++)
        {
            if(arr[i]+arr[j]==target) 
            {
                pair<int,int> p={arr[i],arr[j]};
                cout<< "<" << p.first << ", " << p.second << ">" << endl;
            }   
        }
    }
}