#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    while(n--){
        stack<char> p;
        p.push('x');
        string ps;
        getline(cin, ps);
        for(int i=0;i<ps.size();i++){
            if(ps[i]=='(' || ps[i]=='[') p.push(ps[i]);
            else if(ps[i]==')' && p.top()=='(') p.pop();
            else if(ps[i]==']' && p.top()=='[') p.pop();
            else p.push(ps[i]);
        }
        p.pop();
        p.empty() ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
    return 0;
}
