//reverse of an array
#include <stdio.h>
int main ()
{
    int n, a[100],i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The reverse of array is: ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}