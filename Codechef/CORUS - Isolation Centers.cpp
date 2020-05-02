#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
    int n, q, x;
    string s;
    cin >> n >> q >> s;
    int ocr[26] = {0};
    for(auto c:s) ocr[c-'a']++;
    for(int i = 0; i < q; i++) {
        int ans = 0;
        cin >> x;
        for(auto o:ocr) ans += max(0, o-x);
        cout << ans << endl;
    }
}

int main() {
    FastIO; ll t; cin >> t;
    for(ll i = 0; i < t; i++) solve(i+1);
    return 0;
}
