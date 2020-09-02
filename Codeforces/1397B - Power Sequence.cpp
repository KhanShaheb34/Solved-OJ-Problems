#include<bits/stdc++.h>
using namespace std;
#define ld long long
#define ll long double
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  ll n;
  cin >> n;
  vector<ll> nums(n);
  for(ll i=0; i<n; i++)
  	cin >> nums[i];
  sort(nums.begin(), nums.end());
  ll ans1 = abs(1-nums[0]);
  ll ans2 = abs(1-nums[0]);
  
  ll root1 = (ld)pow(nums[n-1], 1/(double)(n-1));
  ll root2 = root1 + 1;
  
  for(ll i=1; i<n; i++) {
  	ans1 += abs(nums[i] - pow(root1, i));
  	ans2 += abs(nums[i] - pow(root2, i));
  }
  
  cout << (ld)min(ans1, ans2) << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
