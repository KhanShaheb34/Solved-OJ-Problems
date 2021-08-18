#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        double x; cin >> x;
        ll fl = sqrt(x-0.1), cl = ceil(sqrt(x));
        ll fls = fl*fl, cls = cl*cl;
        ll mid = (fls + cls + 1) / 2;
        ll dist = x - mid, r, c;

        if(dist <= 0)
            c = cl, r = cl + dist;
        else
            r = cl, c = cl - dist;

        cout << r << " " << c << endl;

    }

}
