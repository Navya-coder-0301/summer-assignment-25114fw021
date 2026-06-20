//multiply matrices
#include <stdio.h>
int main()
{
    int i,j,k,r1,c1,r2,c2,a[100][100],b[100][100],c[100][100];
    printf ("enter rows and column of first matrix:");
    scanf ("%d%d",&r1,&c1);
     printf ("enter rows and column of second matrix:");
    scanf ("%d%d",&r2,&c2);
    if (c1==r2)
    {
       printf ("enter elments of first matrix:");
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         printf ("enter elments of second matrix:");
        for (i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for (k=0;k<r2;k++)
                {
                    c[i][j]= c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf ("product of matrices: ");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c2;j++)
            {
            printf("%d\t",c[i][j]);
            }
            printf ("\n");
        }

    }
    else
    {
        printf ("multiplication not possible");
    }
    return 0;
}
