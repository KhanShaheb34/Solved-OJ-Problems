#include<bits/stdc++.h>
using namespace std;

long long fib(long long n) 
{ 
  long long f[n+1]; 
  long long i; 
  
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      f[i] = (f[i-1] % 1000000007) + (f[i-2] % 1000000007);
      f[i] %= 1000000007;
  } 
  
  return (f[n] % 1000000007); 
} 

int main() {
    string gibb;
    cin >> gibb;
    long long n = 0, u = 0;
    long long ans=1;
    for (int i = 0; i <= gibb.length(); i++)
    {
        if(gibb[i]=='m' || gibb[i]=='w') {
            ans = 0;
            break;
        }
        if(gibb[i] != 'n' && n) {
            ans *= (fib(n+1) % 1000000007);
            ans %= 1000000007;
            n = 0;
        }
        if(gibb[i] != 'u' && u) {
            ans *= (fib(u+1) % 1000000007);
            ans %= 1000000007;
            u = 0;
        }   
        if(gibb[i]=='n') n++;
        if(gibb[i]=='u') u++;
    }

    cout << ans << endl;
    
}
