#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int ans = 0;
    if(((x1==0 || y1==n) && (x2==0 || y2==n)) || ((x1==n || y1==0) && (x2==n || y2==0))) {
        ans = abs((x1+y1)-(x2+y2));
    }
    else {
        ans = x1+y1+x2+y2;
    }
    ans = min(4*n-ans, ans);
    cout << ans << endl;
}
