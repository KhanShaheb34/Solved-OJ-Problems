       /*=============================*/
      /*=== Codeforces - 1255B ======*/
     /*====== Fridge Lockers =======*/
    /*========= KhanShaheb ========*/
   /*============== C++ ==========*/
  /*============ Accepted =======*/
 /*=============== 77ms ========*/
/*=============================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        vector<int> ax;
        int sum = 0, sm=-1, bg=-1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ax.push_back(a[i]);
            sum += a[i];
        }

        if(m<n || n == 2)
        {
            cout << "-1" << endl;
            continue;
        }

        sort(ax.begin(), ax.end());
        sum *= 2;
        sum += (ax[0]+ax[1]) * (m-n);
        cout << sum << endl;

        for (int i = 1; i <= n; i++)
        {
            if(a[i-1] == ax[0] && sm == -1) sm = i;
            if(a[i-1] == ax[1] && i != sm && bg == -1) bg = i;
        }

        for (int i = 1; i < n; i++)
            cout << i << " " << i+1 << endl;
        cout << n << " " << 1 << endl;


        for (int i = 0; i < m-n; i++)
            cout << sm << " " << bg << endl;


    }
    return 0;
}
