//rotate array to the right 
#include <stdio.h>
int main()
{
    int n, d, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &d);
    int a[100];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Rotate the array to the right
    for(j=0; j<d; j++)
    {
        temp = a[n-1];
        for(i=n-1; i>0; i--)
        {
            a[i] = a[i-1];
        }
        a[0] = temp;
    }
    printf("The array after rotating right is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}