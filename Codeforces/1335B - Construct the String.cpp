#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll cs) {
    int n, a, b;
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++) {
        int add = i % b;
        cout << (char) (add + 'a');
    }
    cout << endl;
}

int main() {
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}
