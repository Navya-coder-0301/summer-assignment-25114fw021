//rotate array to left 
#include <stdio.h>
int main()
{
    int n, d, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);
    int a[100];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Rotate the array to the left
    for(j=0; j<d; j++)
    {
        temp = a[0];
        for(i=0; i<n-1; i++)
        {
            a[i] = a[i+1];
        }
        a[n-1] = temp;
    }
    printf("The array after rotating left is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}