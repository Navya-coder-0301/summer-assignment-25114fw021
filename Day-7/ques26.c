// recursive fibonacci
#include <stdio.h>
int fib(int n)
{
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
int main ()
{
    int n ,result,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonacci series up to %d terms:\n", n);

    for (i=0; i<n; i++)
    {
        result = fib(i);
        printf(" %d\t", result);
    }
    return 0;
}