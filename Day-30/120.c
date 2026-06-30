//mini project
#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d", &s[n].rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;
    printf("Student Added Successfully.\n");
}

void displayStudents()
{
    int i;

    if (n == 0)
    {
        printf("No Records Available.\n");
        return;
    }

    printf("\n----- STUDENT DETAILS -----\n");

    for (i = 0; i < n; i++)
    {
        printf("Roll Number : %d\n", s[i].rollNo);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
        printf("---------------------------\n");
    }
}

void searchStudent()
{
    int i, roll, found = 0;

    printf("Enter Roll Number: ");
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
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT MINI PROJECT =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            printf("Thank You for Using the System.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}