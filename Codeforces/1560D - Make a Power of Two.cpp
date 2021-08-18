#include<bits/stdc++.h>
#define ll long long
using namespace std;

int score(string ts, string x) {
    int c = 0, i=0, j=0;
    for(; i<x.size(); i++) {
        if(j >= ts.size() || x[i] != ts[j]) c++;
        else if(x[i] == ts[j]) j++;
    }
    c += (ts.size() - j);
    return c;
}


int main() {
    ll tp=1;
    vector<string> tps;

    while(tp <= 10e17) {
        tps.push_back(to_string(tp));
        tp <<= 1;
    }

    int t; cin >> t;
    while(t--) {
        string x; cin >> x;
        int ans = INT_MAX;

        for(auto ts:tps)
        ans = min(ans, score(ts, x));
        cout << ans << endl;
    }

}
