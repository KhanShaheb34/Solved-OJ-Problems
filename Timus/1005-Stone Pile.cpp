#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main() {
    FastIO;
    int n;
    cin >> n;
    vector<int> w(n), sums;
    for (int i = 0; i < n; i++) cin >> w[i];
    int total = 0;
    for (auto wi : w) total += wi;

    int ans = INT_MAX;
    int maxsum = 0;
    sums.push_back(0);
    for (int i = 0; i < n; i++) {
        int ssize = sums.size();
        for (int j = 0; j < ssize; j++) {
            int sum = sums[j] + w[i];
            sums.push_back(sum);
            ans = min(ans, abs(total - (2 * sum)));
        }
    }
    cout << ans << endl;
    return 0;
}
