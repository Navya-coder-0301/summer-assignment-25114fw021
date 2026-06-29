//array operation
#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, pos, element;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter Array Elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== ARRAY OPERATIONS SYSTEM =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array Elements: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 2:
            printf("Enter Position: ");
            scanf("%d", &pos);

            printf("Enter Element: ");
            scanf("%d", &element);

            if (pos >= 1 && pos <= n + 1)
            {
                for (i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = element;
                n++;

                printf("Element Inserted Successfully.\n");
            }
            else
            {
                printf("Invalid Position.\n");
            }
            break;

        case 3:
            printf("Enter Position to Delete: ");
            scanf("%d", &pos);

            if (pos >= 1 && pos <= n)
            {
                for (i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;
                printf("Element Deleted Successfully.\n");
            }
            else
            {
                printf("Invalid Position.\n");
            }
            break;

        case 4:
            printf("Enter Element to Search: ");
            scanf("%d", &element);

            for (i = 0; i < n; i++)
            {
                if (arr[i] == element)
                {
                    printf("Element Found at Position %d\n", i + 1);
                    break;
                }
            }

            if (i == n)
            {
                printf("Element Not Found.\n");
            }
            break;

        case 5:
            printf("Program Ended.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}