#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, m;
  map<string, string> srt;
  string a, b;
  cin >> n >> m;

  for (int i = 0; i < m; ++i) {
    cin >> a >> b;

    if (a.length() > b.length()) srt[a] = b;
    else srt[a] = a;
  }

  for (int i = 0; i < n; ++i) {
    cin >> a;
    cout << srt[a] << " ";
  }

  cout << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
