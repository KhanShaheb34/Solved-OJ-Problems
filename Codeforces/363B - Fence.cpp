#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, k, f;
  cin >> n >> k;
  vector<int> fnc, sum;
  sum.push_back(0);

  for (int i = 0; i < n; ++i) {
    cin >> f;
    i > 0 ? sum.push_back(sum[sum.size() - 1] + f) : sum.push_back(f);
  }

  int ms = INT_MAX, msi = 1;

  for (int i = k; i <= n; ++i) {
    int csum = sum[i] - sum[i - k];

    if (csum < ms) ms = csum, msi = i - k + 1;
  }

  cout <<  msi << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
