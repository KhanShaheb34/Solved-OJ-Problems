#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
    ll n;
    cin >> n;
    if(n % 4) {
        cout << "NO" << endl;
    } else {
        vector<int> odd, eve;
        cout << "YES" << endl;
        for(int i=0; i<n; i+=2) {
            cout << i+2 << " ";
            if(i < n-2) eve.push_back(i+1);
        }
        eve.push_back(n+(n/2-1));
        for(auto e:eve) cout << e << " ";
        cout << endl;
    }
}

int main() {
    FastIO;
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}
