// Leetcode daily challenge

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxDifference = INT_MIN;
        for(int i = 0; i <= n; i++) {
            maxDifference = max(maxDifference, abs(nums[i%n]-nums[(i+1)%n]));
        }
        return maxDifference;
    }
};
