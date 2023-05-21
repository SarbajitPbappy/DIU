#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char name[50];
    char email[50];
    char phone[15];
    char address[100];
    float salary;
};

void clearScreen() {
    system("cls");
}

void addEmployee(struct Employee employees[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("Maximum limit reached. Cannot add more employees.\n");
        return;
    }

    struct Employee newEmployee;

    printf("Enter employee name: ");
    scanf("%s", newEmployee.name);

    printf("Enter employee email: ");
    scanf("%s", newEmployee.email);

    printf("Enter employee phone number: ");
    scanf("%s", newEmployee.phone);

    printf("Enter employee address: ");
    scanf("%s", newEmployee.address);

    printf("Enter employee salary: ");
    scanf("%f", &newEmployee.salary);

    employees[*count] = newEmployee;
    (*count)++;

    printf("Employee added successfully!\n");
    printf("Press any key to continue...");
    getch();
    clearScreen();
}

void displayEmployees(struct Employee employees[], int count) {
    if (count == 0) {
        printf("No employees to display.\n");
        return;
    }

    printf("Employee Information:\n");
    for (int i = 0; i < count; i++) {
        struct Employee employee = employees[i];
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employee.name);
        printf("Email: %s\n", employee.email);
        printf("Phone: %s\n", employee.phone);
        printf("Address: %s\n", employee.address);
        printf("Salary: %.2f\n", employee.salary);
        printf("\n");
    }

    printf("Press any key to continue...");
    getch();
    clearScreen();
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        printf("1. Add employee\n");
        printf("2. Display employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        clearScreen();
        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                printf("Press any key to continue...");
                getch();  // Wait for a key press
                clearScreen();
        }
    } while (1);

    return 0;
}
