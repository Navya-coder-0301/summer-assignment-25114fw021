//function to find armstrong number
#include <stdio.h>
int count(int n)
{
    int c = 0;
    while (n > 0)
    {
        n = n / 10;
        c++;
    }
    return c;
}
int pow(int n, int p)
{
    int r = 1;
    for (int i = 1; i <= p; i++)
        r = r * n;
    return r;
}
int arm(int n)
{
    int r, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + pow(r, count(temp));
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
    if (arm(n))
        printf("%d is an armstrong number.", n);
    else
        printf("%d is not an armstrong number.", n);
    return 0;
}