//function for fibonacci series
#include <stdio.h>
void fib(int n)
{
    int a = 0, b = 1, c;
    printf("Fibonacci series up to %d terms: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fib(n);
    return 0;
}