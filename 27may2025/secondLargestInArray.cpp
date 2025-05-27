#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size_of_arr;
    cout<< "enter size of array :";
    cin>> size_of_arr;
    vector<int> arr(size_of_arr);
    for(int i=0;i<size_of_arr;i++)
    {
        cin>> arr[i];  
    }
    int maxi=*max_element(arr.begin(),arr.end());
    int answer=0;
    for(int i : arr)
    {
        if(i<maxi && i>answer) answer=i;
    }
    cout << "second largest element in array :" << answer ;
    return 0;

}