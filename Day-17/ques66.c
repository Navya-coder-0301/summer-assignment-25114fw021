//To find union of arrays
#include <stdio.h>

void unionArray(int arr1[], int n1, int arr2[], int n2)
{
    int unionArr[100];
    int size = 0;
    int i, j, found;

    // Add elements of first array
    for(i = 0; i < n1; i++)
    {
        unionArr[size] = arr1[i];
        size++;
    }

    // Add only unique elements from second array
    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < size; j++)
        {
            if(arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            unionArr[size] = arr2[i];
            size++;
        }
    }

    printf("\nUnion Array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", unionArr[i]);
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

    unionArray(arr1, n1, arr2, n2);

    return 0;
}