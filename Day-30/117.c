//student record
#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    do
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].rollNo);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student Record Added Successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Records Available.\n");
            }
            else
            {
                printf("\n----- STUDENT RECORDS -----\n");
                for (i = 0; i < n; i++)
                {
                    printf("Roll Number : %d\n", s[i].rollNo);
                    printf("Name        : %s\n", s[i].name);
                    printf("Marks       : %.2f\n", s[i].marks);
                    printf("---------------------------\n");
                }
            }
            break;

        case 3:
            found = 0;

            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].rollNo == roll)
                {
                    printf("Student Found!\n");
                    printf("Name  : %s\n", s[i].name);
                    printf("Marks : %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found.\n");

            break;

        case 4:
            found = 0;

            printf("Enter Roll Number: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].rollNo == roll)
                {
                    printf("Enter New Marks: ");
                    scanf("%f", &s[i].marks);

                    printf("Marks Updated Successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found.\n");

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