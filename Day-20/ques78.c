//to check symmetric matrices
#include <stdio.h>
int main ()
{
    int r,c,check=0,i,j,a[100][100];

    printf ("enter rows and columns:");
    scanf ("%d%d",&r,&c);
    if (r==c){

    printf ("enter elments of matrix:");
        for (i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         for (i=0;i<c;i++)
         {
            for(j=0;j<r;j++)
            {
                if (a[i][j]!=a[j][i])
                {
                    check=1;
                    break;
                }
            }
         }
         if (check==0)
         {
            printf ("given matrix is symmetric.");
         }
         else 
         {
            printf ("matrix is not symmetric.");
         }
        }
        else
        {
             printf ("Input a square matrix");
        }
         return 0;
        }