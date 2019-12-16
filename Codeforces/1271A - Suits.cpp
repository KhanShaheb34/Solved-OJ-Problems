
/*
* @site         CodeForces
* @problem_no   1271A
* @problem_name Suits
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         31 ms
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
inline void fast_io() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define INF 1000000000
#define endl '\n'
#define ashche cerr<<"Ekhane Ashche!"<<endl
#define mem(a,x) memset(a,x,sizeof(a))
#define fout(x) fixed<<setprecision(x)
const int mod=1e9+7;

int main()
{
    fast_io();

    int a, b, c, d, e, f, ans = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if(e > f) {
        ans += min(a, d) * e;
        d -= min(a, d);
        ans += min(b, min(c, d)) * f;
        cout << ans << endl;
    } else {
        ans += min(b, min(c, d)) * f;
        d -= min(b, min(c, d));
        ans += min(a, d) * e;
        cout << ans << endl;
    }
    return 0;
}