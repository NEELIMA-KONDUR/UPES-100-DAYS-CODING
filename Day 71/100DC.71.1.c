// Create info.txt in write mode, save user's name and age using fprintf(), and confirm.
#include <stdio.h>

int main() {
    char name[100];
    int age;
    printf("Enter name: ");
    scanf(" %[^\n]", name);
    printf("Enter age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
