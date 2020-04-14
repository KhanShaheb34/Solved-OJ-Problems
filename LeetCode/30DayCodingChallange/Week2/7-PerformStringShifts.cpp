class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int totalShift = 0;
        for(auto sh:shift) 
            sh[0] ? totalShift -= sh[1] : totalShift += sh[1];
        int len = s.length();
        int breakp = ((totalShift % len) + len) % len;
        return s.substr(breakp, len-breakp) + s.substr(0, breakp);
    }
};
