//function to merge two arrays
#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    int i;

    // Copy first array
    for(i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array
    for(i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }
}

int main()
{
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("Merged Array: ");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}