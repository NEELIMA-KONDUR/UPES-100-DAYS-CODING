// Q130 (File Handling)
// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;

    // 1. Write student records to file using fprintf()
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter number of students to store: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        fclose(fp);
        return 1;
    }

    for (i = 0; i < n; i++) {
        char name[50];
        int roll;
        float marks;

        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        // Store format: Name Roll Marks
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    // 2. Read student records from file using fscanf() and display them
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Reading Records from File ---\n");
    char r_name[50];
    int r_roll;
    float r_marks;

    while (fscanf(fp, "%s %d %f", r_name, &r_roll, &r_marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", r_name, r_roll, r_marks);
    }

    fclose(fp);
    return 0;
}
