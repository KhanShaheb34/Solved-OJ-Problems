class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int lds = -1, len = 0;
        vector<int> occur(256, -1);
        bool once = false;
        
        for(int i=0; i<s.length(); i++) {
            int c = (int)s[i];
            
            if(occur[c] != -1 && lds < occur[c]) {
                if(!once) {
                    len = i;
                    once = true;
                }
                else len = max(len, i-lds-1);
                lds = occur[c];
            }
            if(i == s.length()-1) len = max(len, i-lds);

            occur[c] = i;
        }
        
        
        return len;
    }
};
