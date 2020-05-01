#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
    ll n;
    cin >> n;
    ll pow = 2, a=0, b=0;
    if(n == 2) cout << 2 << endl;
    else {
        for(ll i=0; i<n; i++) {
            if( i < (n/2)-1 || i == n-1) a += pow;
            else b+= pow;
            pow *= 2;
        }
        cout << a-b << endl;
    }
}

int main() {
    FastIO; ll t; cin >> t;
    for(ll i = 0; i < t; i++) solve(i+1);
    return 0;
}
