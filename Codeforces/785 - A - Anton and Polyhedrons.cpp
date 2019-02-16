#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, ans=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        switch(s[0]){
        case 'T':
            ans+=4;
            break;
        case 'C':
            ans+=6;
            break;
        case 'D':
            ans+=12;
            break;
        case 'I':
            ans+=20;
            break;
        case 'O':
            ans+=8;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
