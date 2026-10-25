// Convert an input string to sentence case (capitalize the first letter of each sentence/word).
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int capNext = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (capNext && isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            capNext = 0;
        } else {
            str[i] = tolower((unsigned char)str[i]);
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == ' ') {
            capNext = 1;
        }
    }
    printf("%s\n", str);
    return 0;
}
