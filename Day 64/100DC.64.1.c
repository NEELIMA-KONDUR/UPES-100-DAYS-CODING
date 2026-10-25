// Find the length of the longest substring without repeating characters.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]", s);

    int lastIndex[256];
    for (int i = 0; i < 256; i++) lastIndex[i] = -1;

    int maxLen = 0, start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }
        lastIndex[ch] = i;
        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }
    printf("%d\n", maxLen);
    return 0;
}
