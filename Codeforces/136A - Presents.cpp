#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, x;
  cin >> n;
  vector<int> p(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> x;
    p[x] = i;
  }

  for (int i = 1; i <= n; i++) cout << p[i] << " ";

  cout << endl;
}

int main() {
  FastIO; solve(); return 0;
}
