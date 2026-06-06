//convert binary to decimal
#include <stdio.h>

int pow(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}
int main ()
{
    int n, dec=0, i=0, rem;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while(n>0)
    {
        rem = n%10;
        dec = dec + rem*pow(2,i);
        n = n/10;
        i++;
    }
    printf("Decimal equivalent: %d", dec);
    return 0;
}