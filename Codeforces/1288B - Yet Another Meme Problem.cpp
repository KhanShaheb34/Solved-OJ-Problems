
/*
* @site         Codeforces
* @problem_no   1288B
* @problem_name Yet Another Meme Problem
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         31ms
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
        ll a, b;
        cin >> a >> b;
        cout << a * (int)log10(b+1) << endl;
    }

    return 0;
}