#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        int mx = abs(a-b) * 2, hf = abs(a-b);
        if(a > mx || b > mx || c > mx) 
            cout << -1 << endl;
        else
            cout << (c <= hf ? c + hf : c - hf) << endl;
    }
}
