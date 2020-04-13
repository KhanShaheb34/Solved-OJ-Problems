class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
       
        unordered_map<int, vector<int> > rep;
        int maxlen = 0, n = nums.size(), cp = 0;
        rep[0].push_back(-1);
        for(int i=0; i<n; i++) {
            if(nums[i]) cp++;
            else cp--;
            rep[cp].push_back(i);
            maxlen = max(maxlen, i-rep[cp][0]);
        }
        return maxlen;
    }
};
