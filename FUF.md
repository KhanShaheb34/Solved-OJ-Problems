## Frequently Used Functions

- [Power](#power)
- [Prime Facts](#prime-facts)
  * [Without Sieve](#without-sieve)
  * [With Sieve](#with-sieve)
- [Sieve](#sieve)


### Power
```cpp
ll power(ll m, ll n) {
    if (n == 0) return 1;
    if (n % 2 == 0)
        return power(m * m, n / 2);
    else
        return m * power(m * m, (n - 1) / 2);
}
```

### Prime Facts
#### Without Sieve
```cpp
map<ll, ll> primeFact(ll n) {
    map<ll, ll> facts;
    while (n % 2 == 0) {
        facts[2]++;
        n /= 2;
    }

    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            facts[i]++;
            n /= i;
        }
    }

    if (n > 2) facts[n]++;
    return facts;
}
```

#### With Sieve
```cpp
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
```

### Sieve
```cpp
const ll MAX_SIZE = 1000010;
vector<ll> isprime(MAX_SIZE, true);
vector<ll> primes;
vector<ll> SPF(MAX_SIZE);

void seive(int N) {
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
```
