#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const ll MAX_SIZE = 1000010;
vector<ll> isprime(MAX_SIZE, true);
vector<ll> primes;
vector<ll> SPF(MAX_SIZE);

void manipulated_seive(int N) {
    isprime[0] = isprime[1] = false;

    for (ll int i = 2; i < N; i++) {
        if (isprime[i]) {
            primes.push_back(i);
            SPF[i] = i;
        }

        for (ll int j = 0; j < (int)primes.size() && i * primes[j] < N && primes[j] <= SPF[i]; j++) {
            isprime[i * primes[j]] = false;
            SPF[i * primes[j]] = primes[j];
        }
    }
}

map<ll, ll> primeFact(ll n) {
    map<ll, ll> facts;

    for (auto p : primes) {
        if (p * p > n) break;

        while (n % p == 0) {
            facts[p]++;
            n /= p;
        }
    }

    if (n >= 2) facts[n]++;
    return facts;
}

int main() {
    FastIO;
    manipulated_seive(MAX_SIZE);
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        ll x, ans = 1;
        cin >> x;
        map<ll, ll> facts = primeFact(x);
        for (auto kv : facts) ans *= (kv.second + 1);
        cout << "Case " << i + 1 << ": " << ans - 1 << endl;
    }
    return 0;
}
