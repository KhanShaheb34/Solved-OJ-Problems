class Solution {
public:
    bool backspaceCompare(string S, string T) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        
        string a = "", b = "";
        int hashCount = 0;
        for(int i = S.length(); i >= 0; i--) {
            if(S[i] == '#')
                hashCount++;
            else if(hashCount)
                hashCount--;
            else
                a += S[i];
        }
        
        hashCount = 0;
        for(int i = T.length(); i >= 0; i--) {
            if(T[i] == '#')
                hashCount++;
            else if(hashCount)
                hashCount--;
            else
                b += T[i];
        }
        
        return a == b;
    }
};
