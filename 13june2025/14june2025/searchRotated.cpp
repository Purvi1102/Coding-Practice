#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int size_of_array1;
    cout << "enter size of array 1 :";
    cin >> size_of_array1;
    int target;
    cout<< "enter target :";
    cin>> target;
    vector<int> nums(size_of_array1);
    for (int i = 0; i < size_of_array1; i++)
    {
        cin >> nums[i];
    }
    int left = 0;
    int p=0;
        int right =size_of_array1-1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                cout<< mid;
                p=1;
                break;
            }
            else if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid]) right = mid - 1;
                else left = mid + 1;
            } 
            else {
                if (nums[mid] < target && target <= nums[right]) left = mid + 1;
                else right = mid - 1;
            }
        }
        if(p==0) return -1;

}