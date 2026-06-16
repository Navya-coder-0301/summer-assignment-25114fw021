//to find missing number in an array
#include <stdio.h>
int main()
{
    int n, arr[100], i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Find the missing number
    for (i=1; i<=n; i++)
    {
        temp = 0;
        for (j=0; j<n; j++)
        {
            if (arr[j] == i)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
        {
            printf("Missing number is: %d", i);
            return 0;
        }
    }
    return 0;
}