#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve() {
    int n, k;
    cin >> n >> k;

    vector<char> pattern;

    for (int i = 0; i < k; ++i) {
    	for (int j = i; j < k; ++j)
    	{
    		pattern.push_back('a'+i);
    		if(j > i) pattern.push_back('a'+j);
    	}
    }

    string ans(pattern.begin(), pattern.end());
    int len = pattern.size();

    while(n > len) {
    	cout << ans;
    	n -= len;
    }

    cout << ans.substr(0, n);

}

int main() {
    FastIO;
    solve();
    return 0;
}
