#include <stdio.h>

int main() {
  int a,b,c,s=0;
  scanf("%d %d %d", &a, &b, &c);
  while(a>=1 && b>=2 && c>=4){
    a--;
    b-=2;
    c-=4;
    s+=7;
  }
  printf("%d",s);
  return 0;
}
