/*
* @site         Codeforces
* @problem_no   1257B
* @problem_name Magic Stick
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         93 ms
*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int x, y, ans = 0;
        cin >> x >> y;
        if(x >= y) {
            ans = 1;
        }
        else if(x == 2 && y == 3) {
            ans = 1;
        }
        else if(x <= 3) {
            ans = 0;
        }
        else {
            ans = 1;
        }

        if(!ans) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
