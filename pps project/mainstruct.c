#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define FILENAME "students.txt"
#define PASSFILE "passfile.txt"

typedef struct {
    int id;
    char name[50];
    float gpa;
    char address[100];
    char email[50];
    char phone[15];
    int age;
    char gender;
    char department[50];
    char courses[100];
} Student;

void addStudent(Student students[], int *count);
void displayStudents(Student students[], int count);
void saveStudents(Student students[], int count);
void loadStudents(Student students[], int *count);

int main() {
    char username[50], password[50], fileUsername[50], filePassword[50];
    int authenticated = 0;

    printf("Student Database Management System - Login\n");
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    FILE *passfile = fopen(PASSFILE, "r");
    if (passfile != NULL) {
        while (fscanf(passfile, "%s %s", fileUsername, filePassword) != EOF) {
            if (strcmp(username, fileUsername) == 0 && strcmp(password, filePassword) == 0) {
                authenticated = 1;
                break;
            }
        }
        fclose(passfile);
    } else {
        printf("Error opening passfile.txt.\n");
        return 1;
    }

    if (!authenticated) {
        printf("Authentication failed. Exiting...\n");
        return 1;
    }

    Student students[MAX_STUDENTS];
    int count = 0;

    int choice;
    do {
        printf("\nWelcome to Student Database Management System ;)\n");
        printf("------------------1. Add Student------------------\n");
        printf("----------------2. Display Students---------------\n");
        printf("--------------3. Save Students to File------------\n");
        printf("-------------4. Load Students from File-----------\n");
        printf("-----------------------5. Exit--------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                saveStudents(students, count);
                break;
            case 4:
                loadStudents(students, &count);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}

void addStudent(Student students[], int *count) {
    if (*count < MAX_STUDENTS) {
        printf("Enter student ID: ");
        scanf("%d", &students[*count].id);
        getchar();
        printf("Enter student name: ");
        scanf("%s", students[*count].name);
        printf("Enter student GPA: ");
        scanf("%f", &students[*count].gpa);
        printf("Enter student address: ");
        scanf("%s", students[*count].address);
        printf("Enter student email: ");
        getchar();
        scanf("%s", students[*count].email);
        printf("Enter student phone: ");
        scanf("%s", students[*count].phone);
        printf("Enter student age: ");
        scanf("%d", &students[*count].age);
        printf("Enter student gender (M/F/O): ");
        scanf(" %c", &students[*count].gender);
        printf("Enter student department: ");
        scanf("%s", students[*count].department);
        printf("Enter courses enrolled (comma-separated): ");
        scanf("%s", students[*count].courses);
        (*count)++;
    } else {
        printf("Database is full.\n");
    }
}

void displayStudents(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, GPA: %.2f\n", students[i].id, students[i].name, students[i].gpa);
        printf("Address: %s\n", students[i].address);
        printf("Email: %s, Phone: %s\n", students[i].email, students[i].phone);
        printf("Age: %d, Gender: %c\n", students[i].age, students[i].gender);
        printf("Department: %s\n", students[i].department);
        printf("Courses Enrolled: %s\n", students[i].courses);
        printf("\n");
    }
}

void saveStudents(Student students[], int count) {
    FILE *file = fopen(FILENAME, "w");
    if (file != NULL) {
        for (int i = 0; i < count; i++) {
            fprintf(file, "%d %s %.2f %s %s %s %d %c %s %s\n",
                students[i].id, students[i].name, students[i].gpa, students[i].address, students[i].email,
                students[i].phone, students[i].age, students[i].gender, students[i].department, students[i].courses);

        }
        printf("the data has been saved");
        fclose(file);
    } else {
        printf("Error opening file.\n");
    }
}

void loadStudents(Student students[], int *count) {
    FILE *file = fopen(FILENAME, "r");
    if (file != NULL) {
        while (fscanf(file, "%d %s %f %s %s %s %d %c %s %s",
                &students[*count].id, students[*count].name, &students[*count].gpa, students[*count].address, students[*count].email,
                students[*count].phone, &students[*count].age, &students[*count].gender, students[*count].department, students[*count].courses) != EOF) {
            (*count)++;
        }
        printf("the data has been loaded into the structure");
        fclose(file);
    } else {
        printf("Error opening file.\n");
    }
}
