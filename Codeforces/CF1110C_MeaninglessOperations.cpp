#include<bits/stdc++.h>
using namespace std;

int main() {
    int prim[]={0, 1, 3, 7, 3, 31, 3, 127, 3, 7, 3, 23, 3, 8191, 3, 7, 3, 131071, 3, 524287, 3, 7, 3, 47, 3, 31};
    int q, a;
    cin>>q;
    while(q--) {
        cin>>a;
        int i, XOR;
        i = (int) log2(a) + 1;
        XOR = (int) pow(2, i) -1;
        if(XOR != a) printf("%d\n", XOR);
        else printf("%d\n", a/prim[i]);
    }
}
