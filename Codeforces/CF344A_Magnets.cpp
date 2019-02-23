#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, prev = -1, x, ans=0;
    cin>>n;
    while(n--) {
        cin>>x;
        if(x!=prev) ans++;
        prev=x;
    }
    cout<<ans<<endl;
    return 0;
}
