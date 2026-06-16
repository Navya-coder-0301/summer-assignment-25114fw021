//to Find pair with given sum in an array
#include <stdio.h>
int main()
{
    int n, arr[100], i, j, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d", &sum);
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("Pair with given sum is: (%d, %d)", arr[i], arr[j]);
                return 0;
            }
        }
    }
    printf("No pair with given sum found");
    return 0;
}