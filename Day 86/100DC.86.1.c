// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>

enum MenuChoice {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char choice_str[20];
    int num1, num2;
    enum MenuChoice op;

    printf("Enter operation and two numbers (e.g., ADD 10 20): ");
    if (scanf("%19s %d %d", choice_str, &num1, &num2) != 3) {
        printf("Invalid input format!\n");
        return 1;
    }

    // Convert lowercase letters to uppercase manually without <ctype.h>
    for (int i = 0; choice_str[i] != '\0'; i++) {
        if (choice_str[i] >= 'a' && choice_str[i] <= 'z') {
            choice_str[i] -= 32;
        }
    }

    // Match input string to corresponding enum value
    if (choice_str[0] == 'A') {
        op = ADD;
    } else if (choice_str[0] == 'S') {
        op = SUBTRACT;
    } else if (choice_str[0] == 'M') {
        op = MULTIPLY;
    } else {
        printf("Invalid menu choice!\n");
        return 1;
    }

    switch (op) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
    }

    return 0;
}
