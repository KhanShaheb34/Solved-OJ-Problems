#include <bits/stdc++.h>
#define ll long long
using namespace std;

string getT(string s, string seq)
{
    string t = s;
    for (auto c : seq)
    {
        s.erase(remove(s.begin(), s.end(), c), s.end());
        t += s;
    }
    return t;
}

void solve()
{
    string x, order = "";
    cin >> x;
    vector<int> oc(26, 0);
    for (int i = x.size() - 1; i >= 0; i--)
    {
        oc[x[i] - 'a']++;
        if (find(order.begin(), order.end(), x[i]) == order.end())
            order = x[i] + order;
    }

    for (int i = 0; i < order.size(); i++)
        oc[order[i] - 'a'] /= (i + 1);

    int sz = 0;
    for (auto c : oc)
        sz += c;

    string ans = x.substr(0, sz);

    if (getT(ans, order) != x)
        cout << -1 << endl;
    else
        cout << ans << " " << order << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
