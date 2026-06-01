//to check whether a number is prime or not
#include <stdio.h>
int main()
{
    int n,i,j,count;
    printf("enter a range:");
    scanf("%d",&n);
    if (n<=1)
    {
        printf("no prime numbers in the range");
    }
   else
   {
    for (j=2;j<=n;j++)
    {
        count=1;
    for (i=2; i<=j/2; i++)
    {
        if (j%i==0)
        {
            count=0;
            break;
        }
    }
    if (count==1)
    {
        printf("%d ",j);
    }
   
}
}
    return 0;
   }
