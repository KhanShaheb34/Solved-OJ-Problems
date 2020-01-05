
/*
* @site         Codeforces
* @problem_no   1287A
* @problem_name Angry Students
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
        // CODE HERE
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool c = false;
        int ac = 0, maxac = 0;
        for(int i=0; i<=n; i++) {
            if(s[i] == 'A' || i==n) {
                maxac = max(ac, maxac);
                ac = 0;
                c = true;
            }
            if(s[i] == 'P' && c) {
                ac++;
            }
        }
        cout << maxac << endl;
    }

    return 0;
}