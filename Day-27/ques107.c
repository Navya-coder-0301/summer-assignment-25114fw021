//salary management system
#include <stdio.h>

struct Salary {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

struct Salary s;

void inputSalary() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &s.basic);

    s.hra = 0.20 * s.basic;
    s.da  = 0.10 * s.basic;
    s.gross = s.basic + s.hra + s.da;

    printf("Salary calculated successfully!\n");
}

void displaySalary() {
    printf("\n--- Salary Slip ---\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Basic Salary: %.2f\n", s.basic);
    printf("HRA (20%%): %.2f\n", s.hra);
    printf("DA (10%%): %.2f\n", s.da);
    printf("Gross Salary: %.2f\n", s.gross);
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Input Salary\n2. Display Salary Slip\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputSalary(); break;
            case 2: displaySalary(); break;
            case 3: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}