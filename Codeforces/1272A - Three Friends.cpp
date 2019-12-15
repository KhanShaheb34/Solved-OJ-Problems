
/*
* @site         Codeforces
* @problem_no   1272A
* @problem_name Three Friends
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         15 ms
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

    int q;      // FOR TESTCASES
    cin >> q;
    while(q--)
    {
        int pos[3];
        cin >> pos[0] >> pos[1] >> pos[2];
        sort(pos, pos+3);

        int dist = 4;
        
        int ans = abs(pos[0]-pos[1]) + abs(pos[2]-pos[1]) + abs(pos[0]-pos[2]) - dist;
        ans = max(0, ans);

        cout << ans << endl;
    }

    return 0;
}