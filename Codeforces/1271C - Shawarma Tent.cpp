
/*
* @site         CodeForces
* @problem_no   1271C
* @problem_name Shawarma Tent
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         155 ms
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

    int n, sx, sy, x, y, u=0, d=0, l=0, r=0;
    cin >> n >> sx >> sy;
    
    for(int i=0; i<n; i++) {
        cin >> x >> y;

        if(x > sx) r++;
        if(x < sx) l++;
        if(y > sy) u++;
        if(y < sy) d++;
    }

    int maxx = max(l, max(r, max(u, d)));

    cout << maxx << endl;
    if(maxx == l) {
        sx--;
    }
    else if(maxx == r) {
        sx++;
    }
    else if(maxx == u) {
        sy++;
    }
    else {
        sy--;
    }

    cout << sx << " " << sy << endl;

    return 0;
}