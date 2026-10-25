// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);
    int start = 0, len = strlen(str);
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int l = start, r = i - 1;
            while (l < r) {
                char temp = str[l];
                str[l] = str[r];
                str[r] = temp;
                l++;
                r--;
            }
            start = i + 1;
        }
    }
    printf("%s\n", str);
    return 0;
}
