class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        priority_queue<pair<int,int>> q;
        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            if(i.first%2==0) q.push({i.second,i.first});
        }
        if(q.empty()) return -1;
        int res=q.top().second;
        int coun=q.top().first;
        while(!q.empty() && coun==q.top().first){
            if(res>q.top().second) res=q.top().second;
            q.pop();
        }
        return res;
    }
};