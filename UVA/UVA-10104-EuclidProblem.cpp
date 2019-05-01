#include <bits/stdc++.h>
using namespace std;

int calculateGCD(int a, int b, int *x, int *y){
  if(b==0){
    *x = 1;
    *y = 0;
    return a;
  }

  int tempX, tempY;
  int gcd = calculateGCD(b, a%b, &tempX, &tempY);

  *x = tempY;
  *y = tempX - (a/b) * tempY;

  return gcd;
}

int main() {
  int a, b, x = 0, y = 0;
  while(scanf("%d%d", &a, &b)!=EOF){
  	int gcd = calculateGCD(a, b, &x, &y);
		printf("%d %d %d\n", x, y, gcd);
  }
  return 0;
}
