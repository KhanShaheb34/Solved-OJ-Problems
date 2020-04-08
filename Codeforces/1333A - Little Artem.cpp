#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll cs) {
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if((m*n)%2) {
                if(i == 1 && j == 0) {
                    cout << 'B';
                    continue;
                }
                if(i == 1 && j == 1) {
                    cout << 'W';
                    continue;
                }
            }
            else if(n%2 == 0 && m%2 == 0) {
                if(i==n-1 && j==0) {
                    cout << 'B';
                    continue;
                }
            }
            else {
                if(i==n-1 && j==m-1) {
                    cout << 'B';
                    continue;
                }
            }
            cout << ((i+j)%2 ? 'W':'B');
        }
        cout << endl;
    }
}

int main() {
    ll t;
    cin >> t;   
    for(ll i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}
