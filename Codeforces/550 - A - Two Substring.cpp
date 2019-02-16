#include<iostream>
using namespace std;

int main(){
    string s;
    bool ab = false, ba = false;
    cin>>s;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]!='A'){
            ab = true;
        }

        if(s[i]=='B' && s[i+1]=='A' && s[i+2]!='B'){
            ba = true;
        }

        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='A'){
            if(s[i+3]=='B'){
                cout<<"YES"<<endl;
                return 0;
            }
            ba = true;
            i+=2;
        }
        if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='B'){
            if(s[i+3]=='B'){
                cout<<"YES"<<endl;
                return 0;
            }
            ab = true;
            i+=2;
        }
    }
    if(ba && ab) {
        cout<<"YES"<<endl;
            return 0;
    }
    if((s[s.size()-1]=='A' && s[s.size()-2]=='B' && s[s.size()-3]!='A' && ab) || (s[s.size()-1]=='B' && s[s.size()-2]=='A' && s[s.size()-3]!='B' && ba)){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}

