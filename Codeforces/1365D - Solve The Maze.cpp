#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, m;
bool visited[55][55];

void bfs(int x, int y, vector<string> sv) {
  visited[x][y] = true;

  if (x > 0 && !visited[x - 1][y] && sv[x - 1][y] != '#') bfs(x - 1, y, sv);

  if (y > 0 && !visited[x][y - 1] && sv[x][y - 1] != '#') bfs(x, y - 1, sv);

  if (x < n - 1 && !visited[x + 1][y] && sv[x + 1][y] != '#') bfs(x + 1, y, sv);

  if (y < m - 1 && !visited[x][y + 1] && sv[x][y + 1] != '#') bfs(x, y + 1, sv);
}


void solve(ll cs) {
  for (int i = 0; i < 55; i++) for (int j = 0; j < 55; j++) visited[i][j] = false;

  cin >> n >> m;
  vector<string> sv(n);
  vector<pair<int, int> > goods, bads;
  bool yes = true;

  for (int i = 0; i < n; ++i) cin >> sv[i];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (sv[i][j] == 'B') {
        if (i > 0 && sv[i - 1][j] == '.') sv[i - 1][j] = '#';

        if (j > 0 && sv[i][j - 1] == '.') sv[i][j - 1] = '#';

        if (i < n - 1 && sv[i + 1][j] == '.') sv[i + 1][j] = '#';

        if (j < m - 1 && sv[i][j + 1] == '.') sv[i][j + 1] = '#';

        bads.push_back({i, j});
      }

      if (sv[i][j] == 'G') goods.push_back({i, j});
    }
  }

  if (sv[n - 1][m - 1] != '#') bfs(n - 1, m - 1, sv);

  for (auto good : goods)
    if (!visited[good.first][good.second]) yes = false;

  for (auto bad : bads)
    if (visited[bad.first][bad.second]) yes = false;

  cout << (yes ? "Yes" : "No") << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
