#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    while(q--) {
        long long n, a, b;
        cin>>n>>a>>b;
        if(b>=(2*a)){
            cout<<n*a<<endl;
        }
        else {
            cout<<(n/2) * b + (n%2) * a<<endl;
        }
    }
}
