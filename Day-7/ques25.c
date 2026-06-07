//recursive factorial
#include <stdio.h>
int fact (int n)
{
    if (n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0)
    printf("Factorial is not defined for negative numbers.\n");
    else
    {
       result = fact(n);
        printf("Factorial of %d is %d\n", n, result);
    }
    return 0;
}