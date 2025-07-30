class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
       for(int i: nums) mp[i]++;
       priority_queue<pair<int,int>> q;
       for(auto i: mp) q.push({i.second,i.first});
       int i=1;
       vector<int> ans;
       while(i<=k){
        ans.push_back(q.top().second);
        q.pop();
        i++;
       }
       return ans;
    }
};