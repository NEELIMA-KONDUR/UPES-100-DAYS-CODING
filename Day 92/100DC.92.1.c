// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[5];
    int i;

    printf("Enter details of 5 students (Name, Roll, Marks):\n");
    
    // Read details for 5 students
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Print tabular list
    printf("\nTabular list of all 5 students with their details:\n");
    printf("--------------------------------------------\n");
    printf("%-15s | %-10s | %-10s\n", "Name", "Roll", "Marks");
    printf("--------------------------------------------\n");
    
    for (i = 0; i < 5; i++) {
        printf("%-15s | %-10d | %-10d\n", students[i].name, students[i].roll, students[i].marks);
    }
    printf("--------------------------------------------\n");

    return 0;
}
