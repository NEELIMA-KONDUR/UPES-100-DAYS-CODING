// Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], concat[2005];
    printf("Enter first string: ");
    scanf(" %[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(concat, s1);
    strcat(concat, s1);
    if (strstr(concat, s2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}
