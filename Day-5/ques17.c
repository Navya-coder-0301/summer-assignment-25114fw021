//to check perfect number or not
#include <stdio.h>
int main()
{
    int n,i,fact=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        {
            fact=fact+i;
        }
    }
    if (fact==n)
    {
        printf("%d is a perfect number.",n);
    }
    else
    {
        printf("%d is not a perfect number.",n);
    }
    return 0;
}