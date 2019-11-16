/*===========================*/
/*=== Codeforces - 1253C ===*/
/*===== Sweets Eating =====*/
/*====== KhanShaheb ======*/
/*=======================*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<ll> a, cum;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cum.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        cum.push_back(cum[i-1]+a[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        if(i >= m) 
        {
            cum[i] += cum[i-m];
        }
        cout << cum[i] << " ";
    }

    cout << endl;
    
    return 0;
}
