class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        priority_queue<int> q;
        for(int i: nums) q.push(i);
        int count=1;
        while(!q.empty()){
            if(count==k) return q.top();
            count++;
            q.pop();
        }
        return -1;
    }
};