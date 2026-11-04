// Q133 (Enum)
// Create an enum for months and print how many days each month has.

/*
Sample Test Cases
Input 1:
FEB
Output 1:
28 or 29 days
Explanation 1:
February has 28 days in a normal year and 29 in a leap year.
*/

#include <stdio.h>

enum Month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main() {
    char input[20];
    enum Month m = 0;

    printf("Enter month abbreviation (e.g., FEB): ");
    scanf("%19s", input);

    // Convert lowercase letters to uppercase manually without <ctype.h>
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] -= 32;
        }
    }

    // Match input string to corresponding enum value
    if (input[0] == 'J' && input[1] == 'A' && input[2] == 'N') m = JAN;
    else if (input[0] == 'F' && input[1] == 'E' && input[2] == 'B') m = FEB;
    else if (input[0] == 'M' && input[1] == 'A' && input[2] == 'R') m = MAR;
    else if (input[0] == 'A' && input[1] == 'P' && input[2] == 'R') m = APR;
    else if (input[0] == 'M' && input[1] == 'A' && input[2] == 'Y') m = MAY;
    else if (input[0] == 'J' && input[1] == 'U' && input[2] == 'N') m = JUN;
    else if (input[0] == 'J' && input[1] == 'U' && input[2] == 'L') m = JUL;
    else if (input[0] == 'A' && input[1] == 'U' && input[2] == 'G') m = AUG;
    else if (input[0] == 'S' && input[1] == 'E' && input[2] == 'P') m = SEP;
    else if (input[0] == 'O' && input[1] == 'C' && input[2] == 'T') m = OCT;
    else if (input[0] == 'N' && input[1] == 'O' && input[2] == 'V') m = NOV;
    else if (input[0] == 'D' && input[1] == 'E' && input[2] == 'C') m = DEC;
    else {
        printf("Invalid month!\n");
        return 1;
    }

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
    }

    return 0;
}
