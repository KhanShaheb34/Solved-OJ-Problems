#include <stdio.h>
#include <math.h>

int main()
{
	int t, i, n, m, son;
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%d %d", &n, &m);
		son = (n/3) * (m/3);
		printf("%d\n", son);
	}
	return 0;
}