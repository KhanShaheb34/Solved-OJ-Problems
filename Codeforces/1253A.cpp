/*===========================*/
/*=== Codeforces - 1253A ===*/
/*====== Single Push ======*/
/*====== KhanShaheb ======*/
/*=======================*/

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
        bool solved = true;
        for (int i = 0; i < n; i++)        
        {
            int x;
            cin >> x;
            a[i]=x - a[i];
            if(a[i] < 0) solved = false;
        }

        int k = INT_MAX;
        int state = 0;
        if(solved)
        {
            for (int i = 0; i < n; i++)        
            {
                if(state == 0)
                {
                    if(a[i] != 0)
                    {
                        k = a[i];
                        state = 1;
                    }
                }
                else if(state == 1)
                {
                    
                    if(a[i] == 0)
                    {
                        state = 3;
                    }
                    else if(a[i] != k)
                    {
                        solved = false;
                        break;
                    }
                }
                else if(state == 3)
                {
                    if(a[i] != 0)
                    {
                        solved = false;
                        break;
                    }
                }

                // cout << i << "\t" << a[i] << "\t" << state << endl;
            }
        }

        if(solved) cout << "YES" << endl;
        else cout << "NO" << endl;        
    }
    return 0;
}
