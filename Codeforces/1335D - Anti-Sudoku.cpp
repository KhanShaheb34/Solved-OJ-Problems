#include<bits/stdc++.h>
using namespace std;
#define ll long long

int posmap[9] = {0, 3, 6, 1, 4, 7, 2, 5, 8};

string change(string s, int pos) {
    pos = posmap[pos];
    s[pos] == '1' ? s[pos] = '2' : s[pos] = '1';
    return s;
}

void solve(ll cs) {
    string s;
    for(int i=0; i<9; i++) {
        cin >> s;
        s = change(s, i);
        cout << s << endl;
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
