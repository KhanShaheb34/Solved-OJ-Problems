#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n, v;
    cin >> n;
    map<int, vector<int> > a;
    for(int i=0; i<n; i++) {
        cin >> v;
        a[v].push_back(i);
    }
    vector<pair<int, int> > anss;
    for(auto x:a) {
        int p = 0;
        if(x.second.size() == 1) {
            p = 0;
        } else {
            p = x.second[1] - x.second[0];
            for(int i=1; i<x.second.size(); i++) {
                if(x.second[i] - x.second[i-1] != p)
                    p = -1;
            }
            if(p==-1) continue;
        }
        anss.push_back({x.first, p});
    }
    cout << anss.size() << endl;
    for(auto ans:anss) {
        cout << ans.first << " " << ans.second << endl;
    }
}

int main() {
    FastIO;
    solve();
    return 0;
}
