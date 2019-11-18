#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	long long gcd = 0, a;
	while(n--) {
        cin >> a;
        gcd = __gcd(gcd, a);
	}
	long long cnt=0;
	for(int i=1; i<sqrt(gcd); i++)
        if(gcd%i==0) cnt++;
    cnt*=2;
    if(abs(sqrt(gcd))==floor(sqrt(gcd))) cnt++;
    cout << cnt << endl;
	return 0;
}
