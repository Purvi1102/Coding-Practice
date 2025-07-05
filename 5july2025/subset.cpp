class Solution {
    int count=0;
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        vector<int> a;
        check(0,nums,a,k);
        return count;
    }
    void  check(int ind,vector<int>& nums,vector<int>& a,int k)
    {
        if (!a.empty()) {
            bool ok = true;
            for (int i = 0; i < a.size(); i++) {
                for (int j = i + 1; j < a.size(); j++) {
                    if (abs(a[i] - a[j]) == k) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }
            if (ok) count++;
        }

        for (int i = ind; i < nums.size(); i++) {
            a.push_back(nums[i]);
            check(i + 1, nums, a, k);
            a.pop_back();
        }
    }
};