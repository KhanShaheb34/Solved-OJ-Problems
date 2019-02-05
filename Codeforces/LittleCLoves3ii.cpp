#include<iostream>
using namespace std;

int main(){
    long long m, n, ans;
    cin>>m>>n;
    ans=m*n;
    ans-=(ans%4);
    if(m<=2 && n<=2) cout<<0<<endl;
    else if((m<=1 && n<=3) || (m<=3 && n<=1)) cout<<0<<endl;
    else if(m==1 || n==1) {
        if(m==1){
            if((n/3)%2==0) cout<<3*(n/3)<<endl;
            else cout<<n-3+(n%3)<<endl;
        }
        if(n==1){
            if((m/3)%2==0) cout<<3*(m/3)<<endl;
            else cout<<m-3+(m%3)<<endl;

        }
    }
    else cout<<ans<<endl;
    return 0;
}

