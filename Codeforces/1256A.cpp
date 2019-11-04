#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long q;
    cin >> q;
    while(q--)
    {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        if(((a*n) + b) >= s && (s%n) <= b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
