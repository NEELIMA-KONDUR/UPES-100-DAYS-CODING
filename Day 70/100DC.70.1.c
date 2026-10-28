// Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
I am trying to build logic.
Output 1:
I Am Trying To Build Logic.

*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int capNext = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        int isLower = (ch >= 'a' && ch <= 'z');
        int isUpper = (ch >= 'A' && ch <= 'Z');

        if (capNext && (isLower || isUpper)) {
            if (isLower) {
                str[i] = ch - 32;
            }
            capNext = 0;
        } else {
            if (isUpper) {
                str[i] = ch + 32;
            }
        }

        if (ch == ' ' || ch == '.' || ch == '!' || ch == '?') {
            capNext = 1;
        }
    }

    printf("%s\n", str);
    return 0;
}
