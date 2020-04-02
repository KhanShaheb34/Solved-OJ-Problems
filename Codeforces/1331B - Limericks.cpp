#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    int x;
    cin >> x;
    for(int i = 2; i < 998; i++) {
        if((x%i) == 0) {
            cout << i << x/i << endl;
            break;
        }
    }
}
 
int main() {
    solve();
    return 0;
}
