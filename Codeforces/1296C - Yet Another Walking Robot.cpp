#include <bits/stdc++.h>
//For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
using namespace std;
// For ordered_set
using namespace __gnu_pbds;
template <typename T>
using ord_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);

void solve(){
    int n;
    string s;
    cin >> n >> s;
    M<P<int, int>, int> path;
    int x=0, y=0, minSize = INT_MAX, l = -1, r = -1;
    path.insert({{0, 0}, 0});

    for(int i=0; i<n; i++) {
        if(s[i] == 'L') x--;
        if(s[i] == 'R') x++;
        if(s[i] == 'U') y++;
        if(s[i] == 'D') y--;

        bool vis = path.find({x, y}) != path.end();

        if(vis && minSize > (i-path[{x, y}])) {
            minSize = i-path[{x, y}];
            r = i+1;
            l = r - minSize;
        }
        path[{x, y}] = i+1;
    }

    if(minSize == INT_MAX) cout << "-1" << endl;
    else {
        cout << l << " " << r << endl;
    }
    
}

int main(){
   int t = 0;
   cin >> t;
   while(t--){
       solve();
   }
   return 0;
}
