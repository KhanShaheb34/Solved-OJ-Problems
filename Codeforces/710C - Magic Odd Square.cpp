#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n;
  cin >> n;
  int i = n / 2, j = 0, k = 1;
  int mag[50][50];

  while (k <= (n * n)) {
    mag[i][j] = k;

    if (k % n == 0) j++;
    else {
      i++;
      j--;
    }

    k++;

    if (j < 0) j = n - 1;

    if (i == n) i = 0;
  }

  for (j = 0; j < n; j++) {
    for (i = 0; i < n; i++) {
      cout << mag[i][j] << " ";
    }

    cout << endl;
  }
}

int main() {
  FastIO; solve();
  return 0;
}
