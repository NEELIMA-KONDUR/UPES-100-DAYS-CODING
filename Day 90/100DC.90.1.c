// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    char input[50];
    struct Person p;
    int start_idx = 0;

    printf("Enter gender (e.g., Gender=MALE or MALE): ");
    scanf("%49s", input);

    // Flexible parsing: If the user inputs "Gender=MALE", find the part after '='
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '=') {
            start_idx = i + 1;
            break;
        }
    }

    // Convert the first character of the actual value to uppercase manually
    if (input[start_idx] >= 'a' && input[start_idx] <= 'z') {
        input[start_idx] -= 32;
    }

    // Assign to the struct's enum based on the parsed character
    if (input[start_idx] == 'M') {
        p.gender = MALE;
    } else if (input[start_idx] == 'F') {
        p.gender = FEMALE;
    } else {
        p.gender = OTHER;
    }

    // Print based on the struct's enum value
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        default:
            printf("Other\n");
            break;
    }

    return 0;
}
