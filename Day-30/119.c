//employee management
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n = 0, choice, i, id, found;

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &e[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", e[n].name);

            printf("Enter Salary: ");
            scanf("%f", &e[n].salary);

            n++;
            printf("Employee Added Successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Employee Records Available.\n");
            }
            else
            {
                printf("\n----- EMPLOYEE DETAILS -----\n");

                for (i = 0; i < n; i++)
                {
                    printf("ID     : %d\n", e[i].id);
                    printf("Name   : %s\n", e[i].name);
                    printf("Salary : %.2f\n", e[i].salary);
                    printf("----------------------------\n");
                }
            }
            break;

        case 3:
            found = 0;

            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    printf("Employee Found!\n");
                    printf("Name   : %s\n", e[i].name);
                    printf("Salary : %.2f\n", e[i].salary);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found.\n");

            break;

        case 4:
            found = 0;

            printf("Enter Employee ID: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    printf("Enter New Salary: ");
                    scanf("%f", &e[i].salary);

                    printf("Salary Updated Successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found.\n");

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