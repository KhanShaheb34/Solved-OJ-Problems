
/*
* @site         Codeforces
* @problem_no   1263B
* @problem_name PIN Codes
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
        vector<string> pins(n);
        map<string, int> avail;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> pins[i];
            
            if(avail.find(pins[i]) == avail.end()) avail.insert({pins[i], 1});
            else {
                avail[pins[i]]++;
                cnt++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            string cpin = pins[i];

            while(avail[cpin] > 1) {
                cerr << cpin << "\t" << avail[cpin] << endl;
                avail[cpin]--;
                char lastd = (cpin[3] - '0' + 1) % 10 + '0';
                cpin = cpin.substr(0,3) + lastd;
                avail[cpin]++;
            }

            pins[i] = cpin;
        }

        cout << cnt << endl;
        for (int i = 0; i < n; i++)
        {
            cout << pins[i] << endl;
        }
        
    }

    return 0;
}