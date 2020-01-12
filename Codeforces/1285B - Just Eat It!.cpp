
/*
* @site         Codeforces
* @problem_no   1285B
* @problem_name Just Eat It!
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
        int n;
        cin >> n;
        ll a[n], c[n], minn = INT_MAX;
        for(int i=0; i<n; i++) {
            cin >> a[i];

            if(i == 0) c[i] = a[i];
            else c[i] = a[i] + c[i-1];
            minn = min(c[i], minn);
        }

        for (int i = n - 1; i >= 0; i--) {
            if(i == n-1) c[i] = a[i];
            else c[i] = a[i] + c[i+1];
            minn = min(c[i], minn);
        }

        if(minn <= 0) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }

    return 0;
}