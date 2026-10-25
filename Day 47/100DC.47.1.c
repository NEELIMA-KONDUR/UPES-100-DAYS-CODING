// Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    int count[256] = {0};
    printf("Enter first string: ");
    scanf(" %[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams\n");
        return 0;
    }
    for (int i = 0; s1[i] != '\0'; i++) {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}
