#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    vector<int> seq;

    for(int k=0, i=1; k<=1000; i++) {
        if(i%3==0 || i%10==3) continue;
        seq.push_back(i);
        k++;
    }

    int t; cin >> t;
    while(t--) {
        int k; cin >> k;
        cout << seq[k-1] << endl;
    }
}
