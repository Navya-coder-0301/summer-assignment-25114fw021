//to print armstrong number in a range
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
    int lower, upper;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for (int num = lower; num <= upper; num++)
    {
        int n = num;
        int digits = digit_count(num);
        int sum = 0;
        
        while (n != 0)
        {
            int digit = n % 10;
            sum += pow(digit, digits);
            n /= 10;
        }
        
        if (sum == num)
            printf("%d ", num);
    }
    
    printf("\n");
    return 0;
}