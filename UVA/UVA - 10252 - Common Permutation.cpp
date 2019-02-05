#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <char, vector<char>, greater<char> > line1;
    priority_queue <char, vector<char>, greater<char> > line2;
    string str1, str2;
    while(getline(cin, str1) && getline(cin, str2)){
        while(!line1.empty()) line1.pop();
        while(!line2.empty()) line2.pop();
        for(int i=0; i<str1.size(); i++) line1.push(str1[i]);
        for(int i=0; i<str2.size(); i++) line2.push(str2[i]);
        while(!line1.empty() && !line2.empty()){
            if(line1.top()>line2.top()) line2.pop();
            else if(line1.top()<line2.top()) line1.pop();
            else if(line1.top()==line2.top()){
                cout<<line1.top();
                line1.pop();
                line2.pop();
            }
        }
        cout<<endl;
    }
    return 0;
}