class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, a = 0;
        for(auto n:nums) {
            a += n;
            ans = max(ans, a);
            a = max(a, 0);
        }
        return ans;
    }
};
