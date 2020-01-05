
/*
* @site         Codeforces
* @problem_no   1287B
* @problem_name Hyperset
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         530ms
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

    int n, k;
    cin >> n >> k;
    vector<string> cards;
    set<string> finder;

    for(int i=0; i<n; i++) {
        string x;
        cin >> x;
        cards.push_back(x);
        finder.insert(x);
    }

    int ans = 0;

    for(int i=1; i<n; i++) {
        for (int j = 0; j < i; j++)
        {
            char x[k+1];
            for(int l=0; l<k; l++) {
                char a = cards[i][l], b = cards[j][l];
                if(a==b) x[l] = a;
                else {
                    if(a=='S') {
                        if(b=='E') x[l] = 'T';
                        else x[l] = 'E';
                    }
                    if(a=='E') {
                        if(b=='S') x[l] = 'T';
                        else x[l] = 'S';
                    }
                    if(a=='T') {
                        if(b=='E') x[l] = 'S';
                        else x[l] = 'E';
                    }
                }
            } 
            x[k] = '\0';
            if(finder.find(x) != finder.end()) {
                ans++;
            }
        }

    }

    cout << ans/3 << endl;

    return 0;
}