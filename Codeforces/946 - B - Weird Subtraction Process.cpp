#include<iostream>
using namespace std;

int main(){
    long long n, m;
    cin>>n>>m;
    while (1){
        if(n==0 || m==0) break;
        if(n>=2*m){
            n%=2*m;
            continue;
        }
        else if(m>=2*n){
            m%=2*n;
            continue;
        }
        break;
    }
    cout<<n<<" "<<m<<endl;
    return 0;
}

