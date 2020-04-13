class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
       
        unordered_map<int, int> rep;
        rep[0] = -1;
        int maxlen = 0, n = nums.size(), cp = 0;
        for(int i=0; i<n; i++) {
            nums[i] ? cp++ : cp--;
            rep.find(cp) == rep.end() ? rep[cp] = i : maxlen = max(maxlen, i-rep[cp]);
        }
        return maxlen;
    }
};
