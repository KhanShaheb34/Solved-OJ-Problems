#include<bits/stdc++.h>
using namespace std;

int main()
{
    string zo;
    int t = 1;
    while(cin >> zo)
    {
        cout << "Case " << t++ << ":\n";
        int n;
        cin >> n;

        for(int i=0; i<n; i++)
        {
            int a, b;
            cin >> a >> b;
            char ini = zo[min(a, b)];
            bool match = true;

            for(int j=min(a, b); j<=max(a, b); j++)
            {
                if(ini != zo[j])
                {
                    match = false;
                    break;
                }
            }

            if(match) cout << "Yes\n";
            else cout << "No\n";
        }
    }

    return 0;
}
