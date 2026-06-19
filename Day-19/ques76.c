//diagonal sum
#include <stdio.h>
int main ()
{
    int r,c,i,j,a[100][100],sum=0;
    printf ("enter rows and columns:");
    scanf ("%d%d",&r,&c);
    if (r==c)
    {

    printf ("enter elments of matrix:");
        for (i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("sum of diagonal elements are %d",sum);
    }
    else 
    {
        printf ("given matrix is not square");
    }
        return 0;
    }
