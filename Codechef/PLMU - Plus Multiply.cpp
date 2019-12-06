
/*
* @site         Codechef
* @problem_no   PLMU
* @problem_name Plus Multiply
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
        int n, twos = 0, z = 0, num;
        cin >> n;
        while(n--) {
            cin >> num;
            if(num == 2) twos++;
            if(num == 0) z++;
        }
        twos = (twos * (twos-1)) / 2;
        z = (z * (z-1)) / 2;
        cout << twos + z << endl;
        
    }

    return 0;
}