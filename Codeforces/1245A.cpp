#include<bits/stdc++.h>
using namespace std;

int main() {

    int q;
    cin >> q;
    while(q--) {
        int a, b;
        cin >> a >> b;
        if(__gcd(a, b) == 1) cout << "Finite" << endl;
        else cout << "Infinite" << endl;
    }
    return 0;
}
