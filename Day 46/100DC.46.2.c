// Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }
    char ans = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            ans = str[i];
            break;
        }
    }
    if (ans != '\0') printf("%c\n", ans);
    else printf("No repeating character\n");
    return 0;
}
