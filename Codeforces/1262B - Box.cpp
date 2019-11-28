
/*
* @site         Codeforces
* @problem_no   1262B
* @problem_name Box
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         62ms
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
        vector<int> p;
        vector<bool> pc(n+1, false);
        queue<int> px;
        bool valid = true;

        for (int i = 1; i <= n; i++) px.push(i);

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            p.push_back(x);
            if(x <= i) valid = false;
        }

        if(!valid) {
            cout << "-1" << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            int x = p[i];
            if(!pc[x]) {
                cout << x << " ";
                pc[x] = true;
            }
            else {
                while (pc[px.front()])
                    px.pop();
                
                cout << px.front() << " ";
                pc[px.front()] = true;
                px.pop();
            }
        }
        

        
        cout << endl;
        
        
        
    }

    return 0;
}