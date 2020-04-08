#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int prv = 0, prv_count = 0, max_count = -1, x;
    for (int i=0; i<n; i++) {
        cin >> x;
        (x > prv) ? prv_count++ : prv_count = 1;
        prv = x;
        max_count = max(prv_count, max_count);
    }
    cout << max_count << endl;
    return 0;
}
