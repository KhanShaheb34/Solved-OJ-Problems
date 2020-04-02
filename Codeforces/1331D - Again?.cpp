#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    string s;
    cin >> s;
    bool one = false;
    if((s[s.length()-1]-'0')%2) one = true;
    
    cout << (one ? "1" : "0") << endl;
}
 
int main() {
    solve();
    return 0;
}
