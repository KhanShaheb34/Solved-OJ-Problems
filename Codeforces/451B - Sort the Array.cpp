#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    /**
     * states
     * 0 = increasing
     * 1 = going down
     * 2 = going up
     * 3 = not possible
    */

    int n, x, state = 0, start = 1, end = 1, big = 0, small = 0;
    vector<int> a;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        a.push_back(x);
    }
    a.push_back(INT_MAX);
    for(int i=1; i<=n; i++) {
        if(state == 0 && a[i] < a[i-1]) state = 1, start = i, big = a[i-1], small = (i == 1 ? INT_MIN : a[i-2]);
        else if(state == 1 && a[i] > a[i-1] ) {
            if(a[i] < big || a[i-1] < small) state = 3;
            else state = 2, end = i;
        }
        else if(state == 2 && a[i] < a[i-1]) state = 3;
    }
    if(state == 1) end = n;

    if(state == 3) cout << "no";
    else cout << "yes" << endl << start << " " << end << endl;
}

int main() {
    FastIO;
    solve();
    return 0;
}
