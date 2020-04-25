#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, count[26] = {0};
    string s, ans = "";
    bool yes = true;
    
    cin >> n >> s;
    
    for(auto c:s)
        count[c-'a']++;
    
    for(int i=0; i<26; i++) {
        if(count[i]%n != 0) {
            yes = false;
            break;
        }
        for(int j=0; j<count[i]/n; j++)
            ans += (i+'a');
    }
    
    if(yes) while(n--) cout << ans;
    else cout << "-1";
    cout << endl;
    
    return 0;
}
