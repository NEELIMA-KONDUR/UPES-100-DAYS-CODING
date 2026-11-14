// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[50];
    int n, i;
    int max_index = 0;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    // Limit to 50 students max to prevent array bounds issues
    if (n > 50) {
        n = 50;
    }

    printf("Enter details (Name Roll Marks) for %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
        
        // Update max_index if current student has higher marks
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[max_index].name, students[max_index].marks);

    return 0;
}
