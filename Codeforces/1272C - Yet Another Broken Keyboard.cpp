
/*
* @site         Codeforces
* @problem_no   1272C
* @problem_name Yet Another Broken Keyboard
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         30 ms
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

    int n, k;
    cin >> n >> k;
    string s;
    char c[k];

    cin >> s;
    cin.ignore(256, '\n');
    for (int i = 0; i < k; i++) cin >> c[i];

    ll ans = 0, temp = 0;

    for (int i = 0; i <= n; i++)
    {
        bool found = false;

        for (int j = 0; j < k; j++)
            if(c[j]==s[i]) found = true;
        
        if(found) temp++;
        else
        {
            ans += (temp*(temp+1))/2;
            temp = 0;
        }
        
    }
    
    cout << ans << endl;


    return 0;
}