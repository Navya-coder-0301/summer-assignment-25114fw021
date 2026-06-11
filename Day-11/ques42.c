//function to find maximum of two numbers
#include <stdio.h>
int maximum(int a,int b)
{
    if (a>b)
    return a;
    else
    return b;
}
int main()
{
    int a,b,max;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    max=maximum(a,b);
    printf("The maximum of %d and %d is %d",a,b,max);
    return 0;
}