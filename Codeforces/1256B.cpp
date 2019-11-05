#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        int perm[n+1];
        int mini = INT_MAX, minipos = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> perm[i];
            if(perm[i] < mini) {
                mini = perm[i];
                minipos = i;
            }
        }
 
        int done = minipos, k=1;
 
        while (k < n)
        {
 
            if(perm[minipos] == minipos) {
                bool flag = true;
                for(int i=1; i <= n; i++) {
                    if(perm[i]!=i) flag = false;
                }
                if(flag) break;
                mini = INT_MAX;
                for(int i=done+1; i<=n; i++) {
                    if(perm[i] < mini) {
                        mini = perm[i];
                        minipos = i;
                    }
                }
                done = minipos;
                continue;
            }
 
            swap(perm[minipos], perm[minipos-1]);
            minipos--;
            
            k++;
        }
 
        for(int i=1; i<=n; i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
 
    }
    return 0;
}
