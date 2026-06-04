// to check given number is an Armstrong number or not
#include <stdio.h>

int digit_count(int num)
{
    int count=0;
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    return count;
}  

int pow(int base, int exp)
{
    int result=1;
    for(int i=0; i<exp; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    int num, n, sum=0, digits;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    n = num;
    digits = digit_count(num);
    
    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    
    return 0;
}