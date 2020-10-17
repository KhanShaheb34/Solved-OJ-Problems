#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main() {
    FastIO;
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        string s;
        cin >> s;
        stack<char> st;
        for (auto c : s) {
            if (c == 'A' || st.empty())
                st.push(c);
            else
                st.pop();
        }

        cout << st.size() << endl;
    }
    return 0;
}
