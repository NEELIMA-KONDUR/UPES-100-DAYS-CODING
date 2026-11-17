// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that returns a structure
struct Student getTopStudent(struct Student arr[], int n) {
    int max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[max_idx].marks) {
            max_idx = i;
        }
    }
    // Return the entire structure of the top student
    return arr[max_idx];
}

int main() {
    struct Student students[50];
    int n, i;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    if (n > 50) {
        n = 50;
    }

    printf("Enter details (Name Roll Marks) for %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    // Capture the returned structure
    struct Student topStudent = getTopStudent(students, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", topStudent.name, topStudent.roll, topStudent.marks);

    return 0;
}
