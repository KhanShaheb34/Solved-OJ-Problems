class Solution {
public:
    int countElements(vector<int>& arr) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        
        int oc[1009] = {0}, ans = 0;
        
        for(auto n:arr)
            oc[n]++;
        
        for(int i=0; i<1001; i++) 
            if(oc[i+1])
                ans += oc[i];
        
        return ans;
    }
};
