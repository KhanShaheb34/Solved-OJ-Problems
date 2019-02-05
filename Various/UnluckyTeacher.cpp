#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, q, m, i, j;
    cin>>t;
    while(t--) {
        char qi, ai, f[101]={0};
        int c=0, k;
        int answer[101][4]={1};
        cin>>q>>m;
        for(i=0; i<101; i++) {
            for(j=0; j<4    ; j++){
                answer[i][j]={1};
            }
        }
        for(i=0; i<m; i++) {
            for(j=0; j<q; j++){
                cin>>qi>>ai;
                if(ai=='F') answer[j][qi-'A']=0;
                else answer[j][qi-'A']=1, f[j]=qi;
            }
        }
        for(i=0; i<q; i++){
            c=0;
            for(j=0; j<4; j++){
                if(answer[i][j]) k=j;
                else c++;
            }
            cout<<"\t\t"<<k<<"\t\t"<<c<<"\n";
            if(c==3 && m==3) f[i]=k+'A';
            if(f[i]) cout<<f[i]<<" ";
            else cout<<"? ";

        }
        cout<<endl;
    }
    return 0;
}
