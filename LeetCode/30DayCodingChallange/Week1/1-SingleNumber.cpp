class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, bool> vis;
        for(auto n:nums) {
            if(vis[n]) vis[n] = false;
            else vis[n] = true;
        }
        for(auto n:nums) {
            if(vis[n]) return n;
        }
        return -1;
    }
};
