#include<stdio.h>

int swap(int a)
{
    if(a==1) return 0;
    else return 1;
}

int main()
{
    int i,j,ch[5][5];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ch[i][j]);
            ch[i][j]=ch[i][j]%2;
        }

    }
    int initial[5][5]={{1,1,1},{1,1,1},{1,1,1}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                if(ch[i][j]==1)
                {
                    initial[i][j]=swap(initial[i][j]);
                    initial[i][j+1]=swap(initial[i][j+1]);
                    initial[i][j-1]=swap(initial[i][j-1]);
                    initial[i+1][j]=swap(initial[i+1][j]);
                    initial[i-1][j]=swap(initial[i-1][j]);

                }

            }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d",initial[i][j]);
        printf("\n");
    }

    return 0;
}