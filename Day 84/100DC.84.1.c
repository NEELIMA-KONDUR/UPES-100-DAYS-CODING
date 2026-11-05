// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    enum Status current_status;

    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    scanf("%19s", input);

    // Convert lowercase letters to uppercase manually without <ctype.h>
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] -= 32;
        }
    }

    // Match input string to corresponding enum value
    if (input[0] == 'S') {
        current_status = SUCCESS;
    } else if (input[0] == 'F') {
        current_status = FAILURE;
    } else if (input[0] == 'T') {
        current_status = TIMEOUT;
    } else {
        printf("Invalid status!\n");
        return 1;
    }

    switch (current_status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
