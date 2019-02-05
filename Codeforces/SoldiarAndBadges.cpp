#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, c=0, i;
    cin>>n;
    bool f[5000];
    for(i=0; i<5000; i++) f[i]=false;
    for(i=0; i<n; i++){
        cin>>x;
        if(f[x]){
            while(1){
                x++;
                c++;
                if(!f[x]){
                    f[x]=true;
                    break;
                }
            }
        }
        else f[x]=true;
    }
    cout<<c<<endl;
    return 0;
}
