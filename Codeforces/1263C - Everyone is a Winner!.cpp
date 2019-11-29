
/*
* @site         Codeforces
* @problem_no   1263C
* @problem_name Everyone is a Winner!
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         265 ms
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

        int sq = sqrt(n);
        vi nums;
        set<int> occ;
        nums.push_back(0);
        for(int i=1; i <= sq; i++) {
            if(occ.find(i) == occ.end()) {
                nums.push_back(i);
                occ.insert(i);
            }
            if(occ.find(n/i) == occ.end()) {
                nums.push_back(n/i);
                occ.insert(n/i);
            }

        }

        sort(nums.begin(), nums.end());
        cout << nums.size() << endl;

        for(auto x:nums) {
            cout << x << " ";
        }
        cout << endl;
        
    }

    return 0;
}
