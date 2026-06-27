//employee management system
#include <stdio.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    char dept[30];
    float salary;
};

struct Employee e[MAX];
int n = 0;

void addEmployee() {
    printf("\nEnter ID: ");
    scanf("%d", &e[n].id);

    printf("Enter Name:\n ");
    scanf(" %[^\n]", e[n].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", e[n].dept);

    printf("Enter Salary: ");
    scanf("%f", &e[n].salary);

    n++;
    printf("Employee added successfully!\n");
}

void showEmployees() {
    printf("\n--- Employee List ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
               e[i].id, e[i].name, e[i].dept, e[i].salary);
    }
}

int main() {
    int ch;

    while (1) {
        printf("\n1. Add Employee\n2. Show Employees\n3. Exit\nEnter choice: ");
        scanf("%d", &ch);

        if (ch == 1)
            addEmployee();
        else if (ch == 2)
            showEmployees();
        else if (ch == 3)
            break;
        else
            printf("Invalid choice!\n");
    }
}