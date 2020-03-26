#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        cout << ((a%b) ? b - (a%b) : 0) << endl;
    }
    return 0;
}
