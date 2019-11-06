#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int k;
    cin >> k;
    while (k--)
    {
        int n;
        cin >> n;
        vector<int> a;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
 
        sort(a.begin(), a.end());
        
        vector<int> p(n, 0);
        for (int i = 0; i < n; i++)
        {
            p[i] = max(p[i], n-i);
            a[i] = min(a[i], p[i]);
        }
 
        int maxx = 0;
 
        for (int i = 0; i < n; i++)
        {
            maxx = max(a[i], maxx);
        }
        
        cout << maxx << endl;
        
    }
    
 
    return 0;
}
