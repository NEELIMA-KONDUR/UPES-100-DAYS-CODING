// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[20];
    enum Role user_role;

    printf("Enter role (ADMIN, USER, GUEST): ");
    scanf("%19s", input);

    // Convert lowercase letters to uppercase manually without <ctype.h>
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] -= 32;
        }
    }

    // Match input string to corresponding enum value
    if (input[0] == 'A') {
        user_role = ADMIN;
    } else if (input[0] == 'U') {
        user_role = USER;
    } else if (input[0] == 'G') {
        user_role = GUEST;
    } else {
        printf("Invalid role!\n");
        return 1;
    }

    switch (user_role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
