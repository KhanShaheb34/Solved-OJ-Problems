
/*
* @site         Codeforces
* @problem_no   1285C
* @problem_name Fadi and LCM
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

    ll n;
    cin >> n;
    ll s = sqrt(n);

    for(ll i=s; i>0; i--) {
        if(n%i == 0 && __gcd(i, n/i) == 1) {
            cout << n/i << " " << i << endl;
            break;
        }
    }

    return 0;
}