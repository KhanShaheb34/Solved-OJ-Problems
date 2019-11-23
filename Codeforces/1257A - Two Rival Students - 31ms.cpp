/*
* @site         Codeforces
* @problem_no   1257A
* @problem_name Two Rival Students
* @author       KhanShaheb
* @Language     C++
* @status       Accepted
* @time         31 ms
*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        cout << min(n-1, abs(a-b)+x) << endl;
    }
    return 0;
}
