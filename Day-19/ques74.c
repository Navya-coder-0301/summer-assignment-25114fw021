//Program to subtract matrices
#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,a[100][100],b[100][100];
    printf ("enter rows and columns of first and second matrix respectively: ");
    scanf ("%d%d%d%d",&r1,&c1,&r2,&c2);
    if (r1==r2&&c1==c2)
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
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
         printf ("subtraction of given matrices:\n");
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",a[i][j]-b[i][j]);
            }
            printf ("\n");
        }
    }
    else
    {
        printf ("rows and column must be same.");
    }
    return 0;
}