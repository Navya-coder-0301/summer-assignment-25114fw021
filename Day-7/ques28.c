//
#include <stdio.h>
#include <math.h>
int revHelper(int n, int result)
{
    if (n == 0)
        return result;
    return revHelper(n / 10, result * 10 + (n % 10));
}

int rev(int n)
{
    return revHelper(n, 0);
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
        result = rev(n);
        printf("Reverse of %d is %d\n", n, result);
    }
    return 0;
}