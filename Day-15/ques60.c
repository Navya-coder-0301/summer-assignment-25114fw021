//program to move zeroes to the end of the array
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[100];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Move zeroes to the end of the array
    for(i=0; i<n; i++)
    {
        if(a[i] == 0)
        {
            for(j=i; j<n-1; j++)
            {
                a[j] = a[j+1];
            }
            a[n-1] = 0;
        }
    }
    printf("The array after moving zeroes to the end is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}