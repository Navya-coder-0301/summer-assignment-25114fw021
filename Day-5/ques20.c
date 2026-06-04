//to find largest prime factor of a number
#include <stdio.h>
int prime(int n)
{
    int i,flag=0;
    for (i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,largest=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        if (n%i==0)
        {
            if (prime(i)==1)
            {
                largest=i;
            }
        }
    }
    printf("Largest prime factor of %d is %d",n,largest);
    return 0;
}