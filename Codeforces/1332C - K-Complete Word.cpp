#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(ll cs) {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0;
    for(int i=0; i<k/2; i++) {
        int oc[26] = {0}, mx = -1;
        for(int j=i; j<n; j+=k) {
            oc[s[j]-'a']++;
            oc[s[j+k-(2*i)-1]-'a']++;
            mx = max(mx, max(oc[s[j+k-(2*i)-1]-'a'], oc[s[j]-'a']));
        }
        ans += (2*(n/k)) - mx;
    }
    if(k%2) {
        int oc[26] = {0}, mx = -1;
        for(int j=k/2; j<n; j+=k) {
            oc[s[j]-'a']++;
            mx = max(mx, oc[s[j]-'a']);
        }
        ans += (n/k) - mx;
    }
 
 
    cout << ans << endl;
}
 
int main() {
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}
