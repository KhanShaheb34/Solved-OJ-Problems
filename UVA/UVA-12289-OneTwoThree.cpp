#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string num;
    int one = 0, two = 0;
    cin >> num;
    if(num.length() > 4) {
      cout << "3" << endl;
      continue;
    }
    if (num[0] == 'o') one++;
    if (num[1] == 'n') one++;
    if (num[2] == 'e') one++;
    if (num[0] == 't') two++;
    if (num[1] == 'w') two++;
    if (num[2] == 'o') two++;
    if(one > two) cout << "1" << endl;
    else cout << "2" << endl;
  }
  return 0;
}
