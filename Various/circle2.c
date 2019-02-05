#include<stdio.h>
#include<math.h>

int main()
{
    int test, s, i;
    scanf("%d", &test);
    for(i=1;i<=test;i++)
    {
        double ox,oy,ax,ay,bx,by,r,c1,A,res;

        scanf("%lf %lf %lf %lf %lf %lf", &ox,&oy,&ax,&ay,&bx,&by);
        c1= sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        r= sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        A = acos((r*r+r*r-c1*c1)/(2*r*r));
        res = A*r;
        printf("Case %d: %.9lf\n",i,res);

    }

    return 0;
    
}
