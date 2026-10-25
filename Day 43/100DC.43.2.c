// Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int len = strlen(str), pal = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            pal = 0;
            break;
        }
    }
    if (pal) printf("Palindrome\n");
    else printf("Not palindrome\n");
    return 0;
}
