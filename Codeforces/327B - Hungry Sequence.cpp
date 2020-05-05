#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const long long MAX_SIZE = 10000001;

vector<long long >isprime(MAX_SIZE , true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);

void seive(int N)
{
  isprime[0] = isprime[1] = false ;

  for (long long int i = 2; i < N ; i++)
  {
    if (isprime[i])
    {
      prime.push_back(i);
      SPF[i] = i;
    }

    for (long long int j = 0;
         j < (int)prime.size() &&
         i * prime[j] < N && prime[j] <= SPF[i];
         j++)
    {
      isprime[i * prime[j]] = false;
      SPF[i * prime[j]] = prime[j] ;
    }
  }
}

void solve() {
  int n;
  cin >> n;
  seive(10000000);

  for (int i = 0; i < n; i++)
    cout << prime[i] << " ";

  cout << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
