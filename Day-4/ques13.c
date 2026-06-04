//to genersate the first n terms of the Fibonacci sequence
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
        printf("Fibonacci sequence: ");
        for (i=1; i<=n; i++)
        {
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;   
}