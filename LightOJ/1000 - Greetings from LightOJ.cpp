
/*
* @site         LightOJ
* @problem_no   1000
* @problem_name Greetings from LightOJ
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
void deb(istream_iterator<string> it) {}
template<typename T, typename... Args>
void deb(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << endl;
    deb(++it, args...);
}

int main()
{
    fast_io();

    int q, t=1;      // FOR TESTCASES
    cin >> q;
    while(q--)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case " << t++ << ": " << a+b << endl;   
    }

    return 0;
}