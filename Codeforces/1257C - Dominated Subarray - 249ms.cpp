/*
* @site         Codeforces
* @problem_no   1257C
* @problem_name Dominated Subarray
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         249 ms
*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        int occ[n+1] = {0}, mino = INT_MAX;

        for (int i = 0; i < n; i++) {
            if(occ[a[i]] == 0) occ[a[i]] = i+1;
            else {
                mino = min(mino, i-occ[a[i]]+2);
                occ[a[i]] = i+1;
            }
        }
        
        if(mino != INT_MAX) cout << mino << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
