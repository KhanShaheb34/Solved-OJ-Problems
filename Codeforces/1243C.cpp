#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll num = n;

    ll ans;

    if(n==1) ans = 1;
    else {
        set<ll> divs;
        while (n%2==0)
        {
            divs.insert(2);
            n/=2;
        }
        for(ll i=3; i*i <= n; i++) {
            while(n%i==0) {
                divs.insert(i);
                n/=i;
            }
        }

        if(n>2)
            divs.insert(n);

        if(divs.size()==0) ans = num;
        else if(divs.size()==1) ans = *(divs.begin());
        else ans = 1;
    }

    cout << ans << endl;
    

    return 0;
}
