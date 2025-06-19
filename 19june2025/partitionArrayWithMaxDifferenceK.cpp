// Leetcode daily challenge -> 19 June, 2025

class Solution {
public:
    int partitionArray(std::vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int answer = 1;
        int minVal = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] - minVal > k)
            {
                answer++;
                minVal = nums[i];
            }
        }
        return answer;
    }
};
