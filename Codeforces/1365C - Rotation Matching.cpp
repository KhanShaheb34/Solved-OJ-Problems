#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, x;
  cin >> n;
  vector<int> apos(n + 1, 0), bpos(n + 1, 0), md(n + 1, 0);

  for (int i = 1; i <= n; ++i) {
    cin >> x;
    apos[x] = i;
  }

  for (int i = 1; i <= n; ++i) {
    cin >> x;
    bpos[x] = i;
  }

  for (int i = 1; i <= n; ++i) {
    int dist = apos[i] - bpos[i];

    if (dist < 0) dist = n + dist;

    // cout << apos[i] << " " << bpos[i] << " " << dist << endl;
    md[dist]++;
  }

  int maxd = INT_MIN;

  for (int i = 0; i < n; ++i) {
    maxd = max(maxd, md[i]);
  }

  cout << maxd << endl;
}

int main() {
  FastIO; solve(); return 0;
}
