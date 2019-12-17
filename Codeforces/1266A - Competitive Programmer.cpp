
/*
* @site         CodeForces
* @problem_no   1266A
* @problem_name Competitive Programmer
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
        string y;
        cin >> y;
        int count = 0, even = 0, zero = 0;
        for (int i = 0; i < y.length(); i++)
        {
            int num = y[i] - '0';
            count += num;
            if(num % 2 == 0) even++;
            if(num == 0) zero++;
        }

        cerr << count << " " << even << " " << zero << endl;

        if(count % 3 == 0 && zero >= 1 && even >= 2) {
            cout << "red" << endl;
        }
        else cout << "cyan" << endl;
        
        
    }

    return 0;
}