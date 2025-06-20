#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
void check(vector<int>& arr,int ind,int sum,vector<int>& answer,int arr_size)
{
    if(ind==arr_size)
    {
        answer.push_back(sum);
        return;
    }
    check(arr,ind+1,sum+arr[ind],answer,arr_size);
    check(arr,ind+1,sum,answer,arr_size);
}

int main()
{
    int arr_size;
    cout << "enter size of array 1 :";
    cin >> arr_size;
    vector<int> arr(arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    vector<int> answer;
    check(arr,0,0,answer,arr_size);
    for(int i: answer)
    {
        cout<< i << endl;
    }
}