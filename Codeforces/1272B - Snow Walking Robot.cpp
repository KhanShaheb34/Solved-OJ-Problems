
/*
* @site         Codeforces
* @problem_no   1272B
* @problem_name Snow Walking Robot
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         31 ms
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
        string path;
        cin >> path;
        int way[4] = {0};    // 0-UP, 1-DOWN, 2-LEFT, 3-RIGHT

        for (int i = 0; i < path.length(); i++)
        {
            switch (path[i])
            {
                case 'U':
                    way[0]++;
                    break;
                case 'D':
                    way[1]++;
                    break;
                case 'L':
                    way[2]++;
                    break;
                case 'R':
                    way[3]++;
                    break;
            }
        }

        int ud = min(way[0], way[1]), lr = min(way[2], way[3]);

        if(!(ud || lr)) cout << 0 << endl;
        else if(ud && lr) cout << (ud + lr)*2 << endl;
        else cout << 2 << endl; 

        if(ud && lr) {
            for (int i = 0; i < ud; i++)
                cout << "U";
            for (int i = 0; i < lr; i++)
                cout << "L";
            for (int i = 0; i < ud; i++)
                cout << "D";
            for (int i = 0; i < lr; i++)
                cout << "R";
            cout << endl;
        }
        else {
            if(ud) cout << "UD" << endl;
            else if(lr) cout << "LR" << endl;
        }

        
    }

    return 0;
}