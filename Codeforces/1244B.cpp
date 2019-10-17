#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int nums[n];
	for(int i=0; i<n; i++) cin >> nums[i];
	bool mp = true, mn = true;
	for(int i=0; i<n; i++) {
        if(nums[i]%2) {
            if(nums[i] > 0){
                if(mp) {
                    cout << nums[i]/2 << endl;
                } else {
                    cout << nums[i]/2 + 1 << endl;
                }
                mp = !mp;
            }
            else {
                if(mn) {
                    cout << nums[i]/2 << endl;
                } else {
                    cout << nums[i]/2 - 1 << endl;
                }
                mn = !mn;
            }
 
        } else {
            cout << nums[i]/2 << endl;
        }
	}
	return 0;
}
