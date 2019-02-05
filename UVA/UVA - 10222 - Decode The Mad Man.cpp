#include<bits/stdc++.h>
using namespace std;

char charChange(char c){
    string d="qwertyuiop[]asdfghjkl;'zxcvbnm,./ ", e="ertyuiop[]qwdfghjkl;'ascvbnm,./zx ";
    int k=0;
    for(unsigned int i=0; i<e.size(); i++){
        if(e.at(i)==c){
            k=i;
            break;
        }
    }
    return d[k];
}

int main(){
    string s;
    getline(cin, s);
    for(unsigned int i=0; i<s.size(); i++){
        s[i]=charChange(tolower(s[i]));
    }
    cout<<s<<endl;
    return 0;
}