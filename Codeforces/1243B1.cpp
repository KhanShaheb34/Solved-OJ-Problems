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
        string a, b;
        cin >> a >> b;
 
        char erra, errb;
        int errs = 0, alpha[26] = {0}, alphb[26] = {0};
        bool mistake = false;
 
        for (int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                errs++;
                if(errs == 1) {
                    erra = a[i];
                    errb = b[i];
                    mistake = true;
                }
                else if(errs == 2) {
                    if(erra == a[i] && errb == b[i]) {
                        mistake = false;
                    }
                }
            }
 
            alphb[b[i]-'a']++;
            alpha[a[i]-'a']++;
        }
 
        if(errs == 2) {
            if(!mistake) {
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        
 
        
    }
    
 
    return 0;
}
