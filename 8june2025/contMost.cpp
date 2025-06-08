

#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
int main()
{
    int size_of_array1;
    cout << "enter size of array 1 :";
    cin >> size_of_array1;
    vector<int> height(size_of_array1);
    for (int i = 0; i < size_of_array1; i++)
    {
        cin >> height[i];
    }

 int left = 0;
       int right = size_of_array1 - 1;
        int maxArea = 0;
        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            maxArea = max(maxArea, h * w);
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        cout<< maxArea;
    }