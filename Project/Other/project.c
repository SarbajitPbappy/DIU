#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include<time.h>

#define MAX_EMPLOYEES 100
#define MAX_PROJECTS 100
#define MAX_PASSWORD_LENGTH 50

struct Employee {
    char name[50];
    char email[50];
    char phone[15];
    char address[100];
    float salary;
    int isPresent;
};

struct Project {
    char name[50];
    char status[50];
    char assignedEmployee[50];
};

struct Admin {
    char username[50];
    char password[MAX_PASSWORD_LENGTH];
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
    gets(newEmployee.name);

    printf("Enter employee email: ");
    gets(newEmployee.email);

    printf("Enter employee phone number: ");
    gets(newEmployee.phone);

    printf("Enter employee address: ");
    gets(newEmployee.address);

    printf("Enter employee salary: ");
    scanf("%f", &newEmployee.salary);

    newEmployee.isPresent = 0; // Initialize attendance status as absent

    employees[*count] = newEmployee;
    (*count)++;

    printf("Employee added successfully!\n");
    printf("Press any key to continue...");
    getch();
    clearScreen();
}

void markAttendance(struct Employee employees[], int count) {
    if (count == 0) {
        printf("No employees available to mark attendance.\n");
        return;
    }

    char employeeName[50];
    printf("Enter the name of the employee: ");
    scanf("%s", employeeName);

    for (int i = 0; i < count; i++) {
        struct Employee *employee = &employees[i];
        if (strcmp(employee->name, employeeName) == 0) {
            if (employee->isPresent) {
                printf("Employee '%s' is already marked present.\n", employeeName);
            } else {
                time_t currentTime = time(NULL);
                struct tm *localTime = localtime(&currentTime);

                printf("Marking attendance for employee '%s':\n", employeeName);
                printf("Date: %02d/%02d/%d\n", localTime->tm_mday, localTime->tm_mon + 1, localTime->tm_year + 1900);
                printf("Time: %02d:%02d:%02d\n", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

                employee->isPresent = 1;

                printf("Attendance marked successfully!\n");
            }

            printf("Press any key to continue...");
            getch();
            clearScreen();
            return;
        }
    }

    printf("Employee not found!\n");
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

void displayAttendance(struct Employee employees[], int count) {
    if (count == 0) {
        printf("No employees available to display attendance.\n");
        return;
    }

    printf("Attendance Report:\n");
    for (int i = 0; i < count; i++) {
        struct Employee employee = employees[i];
        printf("Employee: %s\n", employee.name);
        printf("Attendance: %s\n", employee.isPresent ? "Present" : "Absent");
        printf("\n");
    }

    printf("Press any key to continue...");
    getch();
    clearScreen();
}

void addProject(struct Project projects[], int *count) {
    if (*count >= MAX_PROJECTS) {
        printf("Maximum limit reached. Cannot add more projects.\n");
        return;
    }

    struct Project newProject;

    printf("Enter project name: ");
    scanf("%s", newProject.name);

    printf("Enter project status: ");
    scanf("%s", newProject.status);

    printf("Enter assigned employee name: ");
    scanf("%s", newProject.assignedEmployee);

    projects[*count] = newProject;
    (*count)++;

    printf("Project added successfully!\n");
    printf("Press any key to continue...");
    getch();
    clearScreen();
}

void displayProjects(struct Project projects[], int count) {
    if (count == 0) {
        printf("No projects to display.\n");
        return;
    }

    printf("Project Information:\n");
    for (int i = 0; i < count; i++) {
        struct Project project = projects[i];
        printf("Project %d:\n", i + 1);
        printf("Name: %s\n", project.name);
        printf("Status: %s\n", project.status);
        printf("Assigned Employee: %s\n", project.assignedEmployee);
        printf("\n");
    }

    printf("Press any key to continue...");
    getch();
    clearScreen();
}

void updateProjectStatus(struct Project projects[], int count) {
    if (count == 0) {
        printf("No projects available to update.\n");
        return;
    }

    char projectName[50];
    printf("Enter the name of the project to update status: ");
    scanf("%s", projectName);

    for (int i = 0; i < count; i++) {
        struct Project *project = &projects[i];
        if (strcmp(project->name, projectName) == 0) {
            printf("Enter new status for the project: ");
            scanf("%s", project->status);
            printf("Project status updated successfully!\n");
            printf("Press any key to continue...");
            getch();
            clearScreen();
            return;
        }
    }

    printf("Project not found!\n");
    printf("Press any key to continue...");
    getch();
    clearScreen();
}

void viewProjectStatus(struct Project projects[], int count) {
    if (count == 0) {
        printf("No projects available.\n");
        return;
    }

    printf("Project Status:\n");
    for (int i = 0; i < count; i++) {
        struct Project project = projects[i];
        printf("Project %d:\n", i + 1);
        printf("Name: %s\n", project.name);
        printf("Status: %s\n", project.status);
        printf("\n");
    }

    printf("Press any key to continue...");
    getch();
    clearScreen();
}

void viewAssignedProjects(struct Project projects[], int count, char employeeName[]) {
    if (count == 0) {
        printf("No projects available.\n");
        return;
    }

    printf("Assigned Projects for Employee '%s':\n", employeeName);
    int assignedProjectCount = 0;
    for (int i = 0; i < count; i++) {
        struct Project project = projects[i];
        if (strcmp(project.assignedEmployee, employeeName) == 0) {
            printf("Project %d:\n", assignedProjectCount + 1);
            printf("Name: %s\n", project.name);
            printf("Status: %s\n", project.status);
            printf("\n");
            assignedProjectCount++;
        }
    }

    if (assignedProjectCount == 0) {
        printf("No assigned projects found for employee '%s'.\n", employeeName);
    }

    printf("Press any key to continue...");
    getch();
    clearScreen();
}

int authenticateUser(struct Admin admin) {
    char username[50];
    char password[MAX_PASSWORD_LENGTH];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, admin.username) == 0 && strcmp(password, admin.password) == 0) {
        return 1;  // User authenticated as admin
    }

    return 0;  // Authentication failed
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    struct Project projects[MAX_PROJECTS];
    struct Admin admin = { "admin", "admin123" };
    int employeeCount = 0;
    int projectCount = 0;
    int choice;

    do {
        printf("1. Admin Menu\n");
        printf("2. Employee Menu\n");
        printf("3. Client Menu\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        clearScreen();
        switch (choice) {
            case 1: {
                int authenticated = authenticateUser(admin);
                if (authenticated) {
                    int adminChoice;
                    do {
                        printf("Admin Menu:\n");
                        printf("1. Add Employee\n");
                        printf("2. Display Employees\n");
                        printf("3. Attendance of Employee\n");
                        printf("4. Add Project\n");
                        printf("5. Display Projects\n");
                        printf("6. Update Project Status\n");
                        printf("7. View Project Status\n");
                        printf("8. View Assigned Projects\n");
                        printf("9. Logout\n");
                        printf("Enter your choice: ");
                        scanf("%d", &adminChoice);

                        clearScreen();
                        switch (adminChoice) {
                            case 1:
                                addEmployee(employees, &employeeCount);
                                break;
                            case 2:
                                displayEmployees(employees, employeeCount);
                                break;
                            case 3:
                                displayAttendance(employees, employeeCount);
                                break;
                            case 4:
                                addProject(projects, &projectCount);
                                break;
                            case 5:
                                displayProjects(projects, projectCount);
                                break;
                            case 6:
                                updateProjectStatus(projects, projectCount);
                                break;
                            case 7:
                                viewProjectStatus(projects, projectCount);
                                break;
                            case 8: {
                                char employeeName[50];
                                printf("Enter the name of the employee: ");
                                scanf("%s", employeeName);
                                viewAssignedProjects(projects, projectCount, employeeName);
                                break;
                            }
                            case 9:
                                printf("Logged out from admin menu.\n");
                                break;
                            default:
                                printf("Invalid choice. Please try again.\n");
                                printf("Press any key to continue...");
                                getch();
                                clearScreen();
                        }
                    } while (adminChoice != 9);
                } else {
                    printf("Authentication failed. Access denied.\n");
                    printf("Press any key to continue...");
                    getch();
                    clearScreen();
                }
                break;
            }
            case 2: {
                int employeeChoice;
                do {
                    printf("Employee Menu:\n");
                    printf("1. Time Menu\n");
                    printf("2. Project Menu\n");
                    printf("3. Logout\n");
                    printf("Enter your choice: ");
                    scanf("%d", &employeeChoice);

                    clearScreen();
                    switch (employeeChoice) {
                        case 1:
                            printf("Time Menu:\n");
                            markAttendance(employees, employeeCount);
                            break;
                        case 2:
                            printf("Project Menu:\n");
                            // Implement project menu functionality for employees
                            break;
                        case 3:
                            printf("Logged out from employee menu.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                            printf("Press any key to continue...");
                            getch();
                            clearScreen();
                    }
                } while (employeeChoice != 3);
                break;
            }
            case 3: {
                int clientChoice;
                do {
                    printf("Client Menu:\n");
                    printf("1. View Project Menu\n");
                    printf("2. Logout\n");
                    printf("Enter your choice: ");
                    scanf("%d", &clientChoice);

                    clearScreen();
                    switch (clientChoice) {
                        case 1:
                            printf("Project Menu:\n");
                            // Implement project menu functionality for clients
                            break;
                        case 2:
                            printf("Logged out from client menu.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                            printf("Press any key to continue...");
                            getch();
                            clearScreen();
                    }
                } while (clientChoice != 2);
                break;
            }
            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                printf("Press any key to continue...");
                getch();
                clearScreen();
        }
    } while (1);

    return 0;
}
