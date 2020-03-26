//https://codeforces.com/contest/1328/problem/C
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    string num;
    cin >> n >> num;

    bool bf = false;
    vector<char> a, b;

    for(long long i = 0; i < n; i++) {
        char c = num[i];

        if(c == '0') {
            a.push_back('0'); b.push_back('0');
        }

        else if(c == '1') {
            if(bf) {
                a.push_back('0'); b.push_back('1');
            }
            else {
                a.push_back('1'); b.push_back('0');
                bf = true;
            }
        }

        else if(c == '2') {
            if(bf) {
                a.push_back('0'); b.push_back('2');
            }
            else {
                a.push_back('1'); b.push_back('1');
            }
        }
    }

    for(auto c:a) {
        cout << c;
    }
    cout << endl;
    for(auto c:b) {
        cout << c;
    }
    cout << endl;

}

int main(){
   long long t = 0;
   cin >> t;
   while(t--){
       solve();
   }
   return 0;
}
