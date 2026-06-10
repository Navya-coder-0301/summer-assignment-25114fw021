//print character pyramid
#include <stdio.h>
int main()
{
    int n,i,j,k,l;
    char ch;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",ch);
            ch++;
        }
        ch=ch-2;
        for(l=i-1;l>=1;l--)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}