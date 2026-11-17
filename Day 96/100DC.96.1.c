// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

// Nested structure definition
struct Date {
    int day;
    int month;
    int year;
};

// Main structure definition
struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee emp;

    printf("Enter Employee Name: ");
    scanf("%49s", emp.name);
    
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    
    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

    // %02d ensures that single digit months/days are printed with a leading zero (e.g., 05)
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
           emp.name, emp.id, 
           emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);

    return 0;
}
