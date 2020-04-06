class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        
        map<string, vector<string> > ansMap;
        set<string> sortedVec;
        
        for(auto str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            ansMap[sorted].push_back(str);
            sortedVec.insert(sorted);
        }
        
        vector< vector<string> > ans;
        for(auto sorted : sortedVec) {
            ans.push_back(ansMap[sorted]);
        }
        
        return ans;
    }
};
