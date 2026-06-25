//merge two sorted arrays
#include <stdio.h>

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while(i < n1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while(j < n2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int n1, n2, i;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    mergeSortedArrays(arr1, n1, arr2, n2, merged);

    printf("\nMerged Sorted Array: ");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}