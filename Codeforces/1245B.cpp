#include<bits/stdc++.h>
using namespace std;

int main() {

    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        int rpsb[3] =  {0,0,0}, rpsa[3] = {0, 0, 0};
        cin >> rpsa[0] >> rpsa[1] >> rpsa[2];
        string seq;
        cin >> seq;
        for(int i=0; i<seq.length(); i++) {
            if(seq[i]=='R') rpsb[0]++;
            else if(seq[i]=='P') rpsb[1]++;
            else rpsb[2]++;
        }
        int rock = min(rpsa[1], rpsb[0]), pap = min(rpsa[2], rpsb[1]), sci = min(rpsa[0], rpsb[2]), nn = n;
        int win = rock + pap + sci;
        rock = rpsa[0]; pap = rpsa[1]; sci = rpsa[2];
        if(n%2) n++;
        int half = n/2;
        if(win >= half){
            cout << "YES" << endl;
            int R=1, P=2, S=3, sol[n] = {0};
            for(int i=0; i<seq.length(); i++) {
                if(seq[i] == 'R' && pap){
                    sol[i] = P;
                    pap--;
                }    
                else if(seq[i] == 'P' && sci) {
                    sol[i] = S;
                    sci--;
                }
                else if(seq[i] == 'S' && rock) {
                    sol[i] = R;
                    rock--;
                }
            }
            for(int i=0; i<nn; i++) {
                if(sol[i] == 0) {
                    if(rock) sol[i] = R, rock--;
                    else if(pap) sol[i] = P, pap--;
                    else sol[i] = S, sci--;
                }

                if(sol[i]==R) cout << "R";
                else if(sol[i]==P) cout << "P";
                else if(sol[i]==S) cout << "S";
            }
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
