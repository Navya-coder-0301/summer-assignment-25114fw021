//Program to row wise sum
#include <stdio.h>
int main()
{
    int r1,c1,i,j,a[100][100];
    printf ("enter rows and columns of second matrix respectively: ");
    scanf ("%d%d",&r1,&c1);
    
    
        printf ("enter elments of matrix:");
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         
         printf ("row wise sum of given matrice:\n");
        for (i=0;i<r1;i++)
        {
            int sum=0;
            for(j=0;j<c1;j++)
            {
                sum = sum + a[i][j];
            }
                printf ("sum of row %d is %d",i+1,sum);
            printf ("\n");
        }
   
    return 0;
}