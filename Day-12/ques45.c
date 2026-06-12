//function to check whether a number is palindrome or not
#include <stdio.h>
int pal(int n)
{
    int r, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (temp == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (pal(n))
        printf("%d is a palindrome number.", n);
    else
        printf("%d is not a palindrome number.", n);
    return 0;
}