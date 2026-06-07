//recursive reverse of a number
#include <stdio.h>
#include <math.h>
int countDigits(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}
int rev(int n, int digits)
{
    if (n == 0)
        return 0;
    return (n % 10) * pow(10, digits - 1) + rev(n / 10, digits - 1);
}
int main ()
{
    int n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0)
        printf("Reverse is not defined for negative numbers.\n");
    else
    {
        int digits = countDigits(n);
        result = rev(n, digits);
        printf("Reverse of %d is %d\n", n, result);
    }
    return 0;
}