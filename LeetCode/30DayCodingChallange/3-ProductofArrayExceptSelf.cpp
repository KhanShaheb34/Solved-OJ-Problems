class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        long prod = 1;
        int zeroCount = 0;
        for(auto n:nums)
            n ? prod *= n : zeroCount++;
        for(int i=0; i<nums.size(); i++) {
            if(zeroCount > 1) nums[i] = 0;
            else if(zeroCount) nums[i] ? nums[i] = 0 : nums[i] = prod;
            else nums[i] = prod / nums[i];
        }
        return nums;
    }
};
