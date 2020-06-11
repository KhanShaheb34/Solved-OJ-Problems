#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int drink = k * l / nl, lime = c * d, salt = p / np;
  cout << min(drink, min(lime, salt)) / n;
}

int main() {
  FastIO; solve(); return 0;
}
