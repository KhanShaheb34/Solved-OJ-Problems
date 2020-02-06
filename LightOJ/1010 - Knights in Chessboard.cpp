#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float m, n;
        cin >> m >> n;
        int ans = 0;
        if(n==1 || m==1) ans = m*n;
        else if(n==2 || m==2) {
            int x = (m*n) / 2;
            ans = ceil((float)x/4.0)*2;
            if(x%4==1) ans--;
            ans *= 2;
        }
        else ans = (int) ceil((m*n)/2.0);
        cout << "Case " << i+1 << ": " << ans << endl;
    }
        
    return 0;
}
