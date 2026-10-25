// Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[1000], res[1000];
    int j = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) {
            res[j++] = ch;
        }
    }
    res[j] = '\0';
    printf("%s\n", res);
    return 0;
}
