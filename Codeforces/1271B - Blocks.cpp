
/*
* @site         CodeForces
* @problem_no   1271B
* @problem_name Blocks
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         46 ms
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

    int n, cw = 0, cb = 0;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++)
        s[i] == 'W' ? cw++ : cb++;
    
    if(cw%2 && cb%2) {
        cout << "-1" << endl;
        return 0;
    }

    if(cb==n || cw==n) {
        cout << 0 << endl;
        return 0;
    }

    bool sb[n];
    for(int i=0; i<n; i++)
        sb[i] = s[i] == 'W';

    // for(int i=0; i < n; i++) {
    //     if(sb[i]) cerr << "W ";
    //     else cerr << "B ";
    // }
    // cerr << endl;

    bool ch;
    if(cw%2) ch = 0;
    else ch = 1;
    bool diff = true;
    vector<int> chan;

    while(diff) {
        for (int i = 0; i < n-1; i++)
        {
            if(sb[i] == ch) {
                sb[i] = !sb[i];
                sb[i+1] = !sb[i+1];
                chan.push_back(i+1);
            }
        }

        for(int i=0; i < n; i++) {
            if(sb[i]) cerr << "W ";
            else cerr << "B ";
        }
        cerr << endl;

        diff = false;
        for (int i = 0; i < n; i++)
        {
            if(sb[i] == ch) diff = true;
        }
        
    }

    cout << chan.size() << endl;
    for(auto x:chan) {
        cout << x << " ";
    }

    return 0;
}