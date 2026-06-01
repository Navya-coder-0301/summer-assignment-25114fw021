// to reverse a number
#include <stdio.h>
int main()
{
    int n,rev=0,r;
    printf("Enter a number:"); 
    scanf("%d",&n);
    r=n;
    if (n<0)
    {
        n=-n;
    }
    else if (n==0)
    {
        printf("Reverse of %d is: 0", r);
        return 0;
    }
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("Reverse of %d is: %d", r, rev);
    return 0;
}