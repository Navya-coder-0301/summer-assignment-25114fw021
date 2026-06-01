#include <stdio.h>
int gcd(int a,int b)
{
    int i=1,gcd=1;
    for (i=1; i<=a&&i<=b; i++)
    {
        if (a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int lcm(int a,int b)
{
    int n,lcm;
    n=a*b;
    lcm=n/gcd(a,b);
    return lcm;
}
int main ()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("gcd of %d and %d is %d\n",a,b,gcd(a,b));
    printf("lcm of %d and %d is %d",a,b,lcm(a,b));
    return 0;
}