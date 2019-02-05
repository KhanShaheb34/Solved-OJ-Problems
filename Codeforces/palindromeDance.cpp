#include<iostream>
using namespace std;

int main(){
    int n, a, b, d[20], c=0, i, f=0;
    cin>>n>>a>>b;
    for(i=0; i<n; i++){
        cin>>d[i];
    }
    for(int j=0; j<n; j++){
        if(d[j]==2 && d[n-j-1]==0) c+=a, d[j]=0;
        if(d[j]==2 && d[n-j-1]==1) c+=b, d[j]=1;
        if(d[j]==2 && d[n-j-1]==2) c+=min(a,b);
    }
    for(int j=0; j<=n/2; j++){
        if(d[j]!=d[n-j-1]){
            f=1;
            break;
        }
    }
    if(f==1) cout<<"-1"<<endl;
    else cout<<c<<endl;
    return 0;
}
