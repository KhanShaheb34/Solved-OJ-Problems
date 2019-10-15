#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string song[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"}, people[101];
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> people[i];
	if(n > 16) {
        int x = n/16 * 16;
        if(x!=n) x+=16;
        for(int i=0; i<x; i++) {
            cout << people[i%n] << ": " << song[i%16] << endl;
        }
	} else {
        for(int i=0; i<16; i++) {
            cout << people[i%n] << ": " << song[i] << endl;
        }
	}
	return 0;
}
