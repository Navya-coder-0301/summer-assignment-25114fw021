// to find gcd of two numbers
#include <stdio.h>
int main()
{
    int a,b,i=1,gcd=1;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    for (i=1; i<=a&&i<=b; i++)
    {
        if (a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    printf("gcd of %d and %d is %d",a,b,gcd);
    return 0;
}