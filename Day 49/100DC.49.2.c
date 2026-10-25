// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter full name: ");
    scanf(" %[^\n]", str);
    int lastSpace = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') lastSpace = i;
    }
    if (lastSpace == -1) {
        printf("%s\n", str);
        return 0;
    }
    if (str[0] != ' ') printf("%c.", str[0]);
    for (int i = 1; i < lastSpace; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ') {
            printf("%c.", str[i]);
        }
    }
    printf(" %s\n", &str[lastSpace + 1]);
    return 0;
}
