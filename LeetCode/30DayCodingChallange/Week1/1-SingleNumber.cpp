class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int x = 0;
        for(auto n : nums) x ^= n;
        return x;
    }
};
