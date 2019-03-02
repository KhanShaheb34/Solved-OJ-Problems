#include<bits/stdc++.h>
using namespace std;

int main() {
    int b, k, ans=0, a;
    cin>>b>>k;
    if(b%2==0){
        while(k--) {
            cin>>ans;
        }
    }
    else {
        while(k--) {
            cin>>a;
            if(a%2==1) ans++;
        }
    }
    if(ans%2==0) printf("even");
    else printf("odd");
}
