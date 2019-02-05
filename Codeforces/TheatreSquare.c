#include <stdio.h>
#include <math.h>

int main() {
    double l,w,s,n;
	scanf("%lf %lf %lf", &l, &w, &s);
	n=ceil(l/s)*ceil(w/s);
	printf("%.0lf", n);
	return 0;
}
