//inventory
#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n = 0, choice, i, id, found;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &item[n].id);

            printf("Enter Item Name: ");
            scanf(" %[^\n]", item[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &item[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &item[n].price);

            n++;
            printf("Item Added Successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Items Available.\n");
            }
            else
            {
                printf("\n----- INVENTORY DETAILS -----\n");

                for (i = 0; i < n; i++)
                {
                    printf("ID       : %d\n", item[i].id);
                    printf("Name     : %s\n", item[i].name);
                    printf("Quantity : %d\n", item[i].quantity);
                    printf("Price    : %.2f\n", item[i].price);
                    printf("----------------------------\n");
                }
            }
            break;

        case 3:
            found = 0;

            printf("Enter Item ID to Search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (item[i].id == id)
                {
                    printf("Item Found!\n");
                    printf("Name     : %s\n", item[i].name);
                    printf("Quantity : %d\n", item[i].quantity);
                    printf("Price    : %.2f\n", item[i].price);

                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Item Not Found.\n");
            }
            break;

        case 4:
            found = 0;

            printf("Enter Item ID: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (item[i].id == id)
                {
                    printf("Enter New Quantity: ");
                    scanf("%d", &item[i].quantity);

                    printf("Quantity Updated Successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Item Not Found.\n");
            }
            break;

        case 5:
            printf("Exiting Inventory System...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}
