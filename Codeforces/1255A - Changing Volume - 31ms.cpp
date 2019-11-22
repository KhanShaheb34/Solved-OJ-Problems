       /*============================*/
      /*=== Codeforces - 1255A ====*/
     /*===== Changing Volume =====*/
    /*======== KhanShaheb =======*/
   /*============ C++ ==========*/
  /*========== Accepted =======*/
 /*============= 31ms ========*/
/*===========================*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int a, b;
        cin >> a >> b;
        int change = abs(a-b);
        int ans = 0;
        ans += change / 5;
        change %= 5;
        ans += change / 2 + change % 2;
        cout << ans << endl;
    }
    return 0;
}
