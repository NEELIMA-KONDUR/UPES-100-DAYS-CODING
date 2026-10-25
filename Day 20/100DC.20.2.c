// Write a program to find the 1's complement of a binary number and print it.
#include <stdio.h>

int main() {
    char bin[65];
    printf("Enter a binary number: ");
    scanf("%64s", bin);
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            putchar('1');
        else if (bin[i] == '1')
            putchar('0');
    }
    putchar('\n');
    return 0;
}
