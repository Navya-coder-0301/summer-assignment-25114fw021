// to find nth term of the Fibonacci sequence
#include <stdio.h>
int main ()
{
    int a=0,b=1,c,n,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("Please enter a positive integer.");
    }
    else
    {
        for (i=1; i<=n; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("\nThe %dth term of the Fibonacci sequence is: %d", n, a);
    }
    return 0;   
}