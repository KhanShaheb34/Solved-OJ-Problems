class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int zero_count = 0, it = 0;
        for(int n:nums) {
            if(n) nums[it] = n, it++;
        }
        int size = nums.size();
        while(it < size) {
            nums[it++] = 0;
        }
    }
};
