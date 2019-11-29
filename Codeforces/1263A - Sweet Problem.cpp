
/*
* @site         Codeforces
* @problem_no   1263A
* @problem_name Sweet Problem
* @author       KhanShaheb
* @Language     C++
* @status       
* @time         
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
        int n[3], ans = 0;
        cin >> n[0] >> n[1] >> n[2];
        sort(n, n+3);

        if(n[1] != n[2]) {
            if(n[2]-n[1] > n[0]) {
                ans = n[0] + n[1];
                n[2] = -1;
            } else {
                ans = n[2] - n[1];
                n[0] -= (n[2] - n[1]);
                n[2] = n[1];
            }
        }
        
        if(n[2] != -1) {
            ans += (n[2] + n[0]/2);
        }

        cout << ans << endl;

    }

    return 0;
}