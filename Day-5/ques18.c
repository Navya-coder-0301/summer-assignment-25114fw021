//to check whether the given number is strong number or not
#include <stdio.h>
int fact(int n)
{
    int i=1,fact=1;
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main ()
{
    int n,num,r,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+fact(r);
        n=n/10;
    }
    if(sum==num)
    {
        printf("%d is a strong number.",num);
    }
    else
    {
        printf("%d is not a strong number.",num);
    }
    return 0;
}
