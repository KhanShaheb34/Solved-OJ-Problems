#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  ll n;
  cin >> n;
  cout << 4 + (n * 3) << endl;
  int i = 0, j = 0;
  cout << i << " " << j << endl;

  for (int k = -1; k < n; k++) {
    cout << i << " " << j + 1 << endl;
    cout << i + 1 << " " << j << endl;
    cout << i + 1 << " " << j + 1 << endl;
    i++;
    j++;
  }
}

int main() {
  FastIO; solve(); return 0;
}
