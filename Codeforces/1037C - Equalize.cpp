#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n, c = 0;
    string a, b;
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) continue;
        if(i < n-1 && a[i+1] != b[i+1] && a[i] != a[i+1]) i++;
        c++;
    }
    cout << c << endl;
}

int main() {
    FastIO;
    solve();
    return 0;
}
