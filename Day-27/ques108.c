//marksheet generation system
#include <stdio.h>

struct Marksheet {
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
};

struct Marksheet s;

void inputMarks() {
    printf("\nEnter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &s.m1, &s.m2, &s.m3, &s.m4, &s.m5);

    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.percentage = s.total / 5.0;

    if (s.percentage >= 75)
        s.grade = 'A';
    else if (s.percentage >= 60)
        s.grade = 'B';
    else if (s.percentage >= 40)
        s.grade = 'C';
    else
        s.grade = 'F';

    printf("Marksheet generated successfully!\n");
}

void displayMarksheet() {
    printf("\n--- MARKSHEET ---\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total: %d / 500\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
    printf("Grade: %c\n", s.grade);
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Enter Marks\n2. Display Marksheet\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputMarks(); break;
            case 2: displayMarksheet(); break;
            case 3: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}