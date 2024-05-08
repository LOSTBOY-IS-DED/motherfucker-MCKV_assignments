#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNo;
    int marks;
};

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Dynamically allocate memory for an array of students
    struct Student *students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    // Input student details
    for (int i = 0; i < numStudents; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Find the highest marks
    int highestMarks = students[0].marks;
    for (int i = 1; i < numStudents; ++i) {
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
        }
    }

    // Display names of students with the highest marks
    printf("Students with the highest marks:\n");
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].marks == highestMarks) {
            printf("%s\n", students[i].name);
        }
    }

    // Deallocate memory
    free(students);

    return 0;
}
