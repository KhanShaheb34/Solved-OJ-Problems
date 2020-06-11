#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  ll n, k, f, t;
  cin >> n >> k;
  vector<int> joy;

  for (int i = 0; i < n; ++i) {
    cin >> f >> t;
    joy.push_back(t > k ? f - (t - k) : f);
  }

  sort(joy.begin(), joy.end());
  cout << joy[joy.size() - 1] << endl;
}

int main() {
  FastIO; solve(); return 0;
}
