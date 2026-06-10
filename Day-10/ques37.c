//print star pyramid
#include <stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        for(l=2;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}