#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

pair<int, int> getTwoIndices(vector<int> ans) {
    int f = -1, s = -1;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == -1) {
            if (f != -1) {
                s = i;
                break;
            } else {
                f = i;
            }
        }
    }

    return {f, s};
}

int main() {
    FastIO;
    int n, done = 0;
    cin >> n;
    vector<int> ans(n, -1);
    map<pair<int, int>, int> mods;

    while (done < n - 1) {
        pair<int, int> inds = getTwoIndices(ans);
        int x = inds.first, y = inds.second;
        int mod1, mod2;
        cout << "? " << x + 1 << " " << y + 1 << endl;
        cin >> mod1;
        if (mod1 == -1) return 0;
        cout << "? " << y + 1 << " " << x + 1 << endl;
        cin >> mod2;
        if (mod2 == -1) return 0;
        mods[{x, y}] = mod1;
        mods[{y, x}] = mod2;

        if (mod1 == mod2) {
            ans[x] = -2;
            ans[y] = -2;
        } else if (mod1 > mod2)
            ans[x] = mod1;
        else
            ans[y] = mod2;

        done++;
    }
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == -1) {
            ans[i] = n;
            break;
        }
    }

    cout << "! ";

    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
    cout.flush();
    return 0;
}
