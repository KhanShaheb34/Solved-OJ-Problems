#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    unsigned int si=s.size(), f=0;
    for(unsigned int i=0; i<si; i++){
        if(s[i]!=t[si-i-1]){
            f=1;
            break;
        }
    }
    if(f==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}