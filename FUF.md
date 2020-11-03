## Frequently Used Functions

- [Power](#power)
- [Prime Facts](#prime-facts)

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
