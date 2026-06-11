//function to calculate factorial of a number
#include <stdio.h>
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int n, result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=factorial(n);
    printf("The factorial of %d is %d",n,result);
    return 0;
}