// to check whether given number is palindrome or not
#include <stdio.h>
int main()
{
    int n,pal=0,r,n1;
    printf("Enter a number:");
    scanf("%d",&n);
    r=n;
    if (n<0)
    {
        n=-n;
    }
    else if (n==0)
    {
        printf("The number %d is a palindrome.", r);
        return 0;
    }
    while(n>0)
    {
        n1=n%10;
        pal=pal*10+n1;
        n=n/10;
    }
    if (pal==r)
    {
        printf("The number %d is a palindrome.", r);
    }
    else
    {
        printf("The number %d is not a palindrome.", r);
    }
    return 0;
}