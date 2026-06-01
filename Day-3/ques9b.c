//to check whether a number is prime or not
#include <stdio.h>
int main()
{
    int n,i,count=1;
    printf("enter a number:");
    scanf("%d",&n);
    if (n<=1)
    {
        if (n==1)
        {
            printf("1 is neither prime nor composite");
        }
        else
        {
        printf("invalid input");
        }
    }
   else
   {
    for (i=2; i<=n/2; i++)
    {
        if (n%i==0)
        {
            count=0;
            printf ("divisible by %d\n",i);  //to see the factors of the number
        }
    }
    if (count==1)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }
}
    return 0;
   }
