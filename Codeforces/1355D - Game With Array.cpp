#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, s;
  cin >> n >> s;

  if (s / 2 >= n) {
    cout << "YES" << endl;

    for (int i = 0; i < n - 1; ++i)
      cout << "1 ";

    cout << s - n + 1 << endl;
    cout << s / 2 << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  FastIO; solve();
  return 0;
}
