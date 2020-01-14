
/*
* @site         Codeforces
* @problem_no   1288A
* @problem_name Deadline
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         15ms
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
        float n, d, x;
        cin >> n >> d;
        x = (int)sqrt(d) - 1;
        x = x + ceil(d/(x+1));
        if(x <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}