// C program to find the LCM of two numbers
#include <stdio.h>
int main ()
{
    int a,b,i,n,lcm,gcd;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    n=a*b;
    for (i=1;i<=a&&i<=b;i++)
    {
        if (a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    lcm=n/gcd;
    printf("lcm of %d and %d is %d",a,b,lcm);
    return 0;
}