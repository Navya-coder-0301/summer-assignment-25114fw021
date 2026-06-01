//to find sum of digits of a number
#include <stdio.h>
int main()
{
    int n,n1,r,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    r=n;
    if (n<0)
    {
        n=-n;
    }
    else if (n==0)
    {
        printf("Sum of digits of %d is: 0", r);
        return 0;
    }
    while(n>0)
    {
        n1=n%10;
        sum=sum+n1;
        n=n/10;
    }
    printf("Sum of digits of %d is: %d", r, sum);
    return 0;
}