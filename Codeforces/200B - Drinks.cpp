#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  float n, sum = 0, x;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> x;
    sum += x;
  }

  cout << sum / n;
}

int main() {
  FastIO; solve(); return 0;
}
