#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int solve() {
    int n, arr[4] = {6, 8, 4, 2};
    cin >> n;
    if(n == 0) return 1;
    return arr[n % 4];
}

int main() {
    FastIO;
    cout << solve() << endl;
    return 0;
}
