//library
#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    int issued;
};

int main()
{
    struct Book b[100];
    int n = 0, choice, i, id, found;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", b[n].name);

            b[n].issued = 0;
            n++;

            printf("Book Added Successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Books Available.\n");
            }
            else
            {
                printf("\n----- BOOK LIST -----\n");

                for (i = 0; i < n; i++)
                {
                    printf("ID : %d\n", b[i].id);
                    printf("Book : %s\n", b[i].name);

                    if (b[i].issued == 0)
                        printf("Status : Available\n");
                    else
                        printf("Status : Issued\n");

                    printf("---------------------\n");
                }
            }
            break;

        case 3:
            found = 0;

            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    b[i].issued = 1;
                    printf("Book Issued Successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book Not Found.\n");

            break;

        case 4:
            found = 0;

            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    b[i].issued = 0;
                    printf("Book Returned Successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book Not Found.\n");

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