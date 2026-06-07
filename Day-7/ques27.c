// recursive sum of digits
#include <stdio.h>
int sum( int n)
{
    if (n==0)
    return 0;
    else
    return n%10 + sum (n/10);
}
int main ()
{
    int n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0)
    printf("Sum is not defined for negative numbers.\n");
    else
    {
       result = sum(n);
        printf("Sum of digits of %d is %d\n", n, result);
    }
    return 0;
}