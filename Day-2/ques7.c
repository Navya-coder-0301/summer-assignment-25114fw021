// to calculate product of digits of a given no
#include <stdio.h>
int main()
{
    int n,n1,r,prod=1;
    printf("Enter a number:");
    scanf("%d",&n);
    r=n;
    if (n<0)
    {
        n=-n;
    }
    else if (n==0)
    {
        printf("product of digits of %d is: 0", r);
        return 0;
    }
    while(n>0)
    {
        n1=n%10;
        prod=prod*n1;
        n=n/10;
    }
    printf("product of digits of %d is: %d", r, prod);
    return 0;
}