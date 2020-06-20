#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int n, a;
  cin >> n;
  vector<int> o, e;

  for (int i = 1; i <= 2 * n; ++i) {
    cin >> a;

    if (a % 2) o.push_back(i);
    else e.push_back(i);
  }

  if (o.size() % 2) {
    for (int j = 1; j + 1 < o.size(); j += 2)
      cout << o[j] << " " << o[j + 1] << endl;

    for (int k = 1; k + 1 < e.size(); k += 2)
      cout << e[k] << " " << e[k + 1]  << endl;
  } else {
    if (o.size() > e.size()) {
      for (int j = 2; j + 1 < o.size(); j += 2)
        cout << o[j] << " " << o[j + 1] << endl;

      for (int k = 0; k + 1 < e.size(); k += 2)
        cout << e[k] << " " << e[k + 1]  << endl;
    }
    else {
      for (int j = 0; j + 1 < o.size(); j += 2)
        cout << o[j] << " " << o[j + 1] << endl;

      for (int k = 2; k + 1 < e.size(); k += 2)
        cout << e[k] << " " << e[k + 1]  << endl;
    }
  }

  cout << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
