//convert decimal to binary
#include <stdio.h>  
int main ()
{
    int n, bin[10], j,i;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    for(i=0; n>0; i++)
    {
        bin[i] = n%2;
        n = n/2;
    }
    printf("Binary equivalent: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d", bin[j]);
    }
    return 0;
}
