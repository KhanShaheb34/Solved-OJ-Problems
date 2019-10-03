#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        bool pipes[2][n];
        char pipe;
        for(int i=0; i<n; i++) {
            cin >> pipe;
            pipes[0][i] = (pipe=='1' || pipe=='2');
        }
        for(int i=0; i<n; i++) {
            cin >> pipe;
            pipes[1][i] = (pipe=='1' || pipe=='2');
        }
        bool pos = false;
        int i=0;
        for(i=0; i<n; i++) {
            if(!pipes[pos][i] && pipes[!pos][i]) {
                break;
            }
            if(!pipes[pos][i]) pos = !pos;
        }
        if(pos && i==n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
