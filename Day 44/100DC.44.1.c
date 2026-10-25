// Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == ' ') spaces++;
        else if (ch >= '0' && ch <= '9') digits++;
        else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
