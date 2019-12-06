
/*
* @site         Codechef
* @problem_no   WATSCORE
* @problem_name That Is My Score!
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         0 ms
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
        int marks[12] = {0}, n, p, s;
        cin >> n;
        int total = 0;
        while (n--)
        {
            cin >> p >> s;
            marks[p] = max(marks[p], s);
            
        }
        for (int i = 1; i <= 8; i++) {
            total += marks[i];
        }
        cout << total << endl;
        
    }

    return 0;
}