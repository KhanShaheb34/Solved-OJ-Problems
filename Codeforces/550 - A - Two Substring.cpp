#include<iostream>
using namespace std;

int main(){
    string s;
    bool yes = false;
    cin>>s;
    for(int i=0; i<s.size()-2; i++){
        if((s[i]=='A' && s[i+1]=='B' && s[i+2]!='A') || (s[i]=='B' && s[i+1]=='A' && s[i+2]!='B')) {
            cout<<"YES"<<endl;
            return 0;
        }
        if((s[i]=='A' && s[i+1]=='B' && s[i+2]=='A') || (s[i]=='B' && s[i+1]=='A' && s[i+2]=='B')) i+=1;
    }
    if((s[s.size()-1]=='A' && s[s.size()-2]=='B' && s[s.size()-3]!='A') || (s[s.size()-1]=='B' && s[s.size()-1]=='A' && s[s.size()-3]!='B')){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}

