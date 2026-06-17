// to find common elements in arrays
#include <stdio.h>

void findCommonElements(int arr1[], int n1, int arr2[], int n2)
{
    int i, j;
    int found = 0;

    printf("\nCommon Elements: ");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                found = 1;
            }
        }
    }

    if(found == 0)
    {
        printf("No common elements found.");
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

    findCommonElements(arr1, n1, arr2, n2);

    return 0;
}