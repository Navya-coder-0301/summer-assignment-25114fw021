//function to check if a number is prime
#include <stdio.h>
int prime(int n)
{
    int i, flag = 0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main ()
{
    int n, result;
    printf("enter a number: ");
    scanf("%d",&n);
    result=prime(n);
    if(result==0) 
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);
    return 0;
}