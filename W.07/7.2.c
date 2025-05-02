#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 4

const char* subjects[NUM_SUBJECTS] = {
    "Programming", "Data Structures", "Discrete Math", "Algorithms"
};

struct Student {
    int id;
    int grades[NUM_SUBJECTS];
};

// Function to initialize students with random grades
void initializeStudents(struct Student students[]) {
    srand(time(0));
    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].id = i;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            students[i].grades[j] = rand() % 101; // Grades between 0 and 100
        }
    }
}

// Function to display a student's grades
void displayGrades(struct Student students[], int id) {
    if (id < 0 || id >= NUM_STUDENTS) {
        printf("Invalid student ID.\n");
        return;
    }
    printf("Grades for Student ID %d:\n", id);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("%s: %d\n", subjects[i], students[id].grades[i]);
    }
}

// Function to update a student's grades
void updateGrades(struct Student students[], int id) {
    if (id < 0 || id >= NUM_STUDENTS) {
        printf("Invalid student ID.\n");
        return;
    }
    printf("Enter new grades for Student ID %d:\n", id);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("%s: ", subjects[i]);
        scanf("%d", &students[id].grades[i]);
    }
}

int main() {
    struct Student students[NUM_STUDENTS];
    initializeStudents(students);

    int choice;
    int id;

    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. View Student Grades\n");
        printf("2. Update Student Grades (Admin)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Student ID (0 - 9): ");
                scanf("%d", &id);
                displayGrades(students, id);
                break;
            case 2:
                printf("Enter Student ID (0 - 9): ");
                scanf("%d", &id);
                updateGrades(students, id);
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}
