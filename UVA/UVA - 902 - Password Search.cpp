#include<iostream>
#include<map>
using namespace std;

int main(){
    map <string, int> pass;
    map <string, int> :: iterator it;
    int n;
    string msg;
    while(cin>>n){
        cin>>msg;
        int maxn=0;
        string passTemp, password;
        pass.clear();
        for(unsigned int i=0; i<msg.size()-n+1; i++){
            passTemp=msg.substr(i,n);
            it = pass.find(passTemp);
            if(it==pass.end()){
                pass.insert(pair<string, int> (passTemp, 1));
            }
            else {
                it->second++;
            }
        }
        for(it=pass.begin(); it!=pass.end(); it++){
            if(it->second>maxn){
                maxn=it->second;
                password=it->first;
            }
        }
        cout<<password<<endl;
    }
    return 0;
}