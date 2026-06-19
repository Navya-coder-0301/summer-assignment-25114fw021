//transpose of matrix
#include <stdio.h>
int main ()
{
    int r,c,i,j,a[100][100];
    printf ("enter rows and columns:");
    scanf ("%d%d",&r,&c);

    printf ("enter elments of matrix:");
        for (i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf ("transpose of matrix is \n:");
         for (i=0;i<c;i++)
         {
            for(j=0;j<r;j++)
            {
                printf ("%d\t",a[j][i]);
            }
            printf ("\n");
         }
         return 0;
        }