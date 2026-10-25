// Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    printf("%d\n", count);
    return 0;
}
