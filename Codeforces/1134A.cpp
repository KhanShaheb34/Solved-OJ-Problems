#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sum=0;
        cin >> n;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            sum+= x;
        }
        int ans = sum / n;
        if(sum%n) ans++;
        cout << ans << endl;
    }
    return 0;
}
