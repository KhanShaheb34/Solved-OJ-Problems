#include <bits/stdc++.h>
using namespace std;

int main() {
  double PI = 3.14159265359;
  double d, a;
  char unit[5];

  while (scanf("%lf%lf%s", &d, &a, unit)!=EOF) {
    if(unit[0] == 'm') a /= 60;
    if(a > 180) a = 360 - a;
    d+=6440;
    a *= (PI / 180);
    double arc = a * d;
    double str = sqrt(2 * d * d * (1 - cos(a)));
    cout << setprecision(6) << fixed;
    cout << arc << " " << str << endl;
  }
  return 0;
}
