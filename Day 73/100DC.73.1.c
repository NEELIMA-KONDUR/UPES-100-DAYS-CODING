// Q123: Write a C program to read a text file and count the total number of characters, words, and lines present in it.

/*
Sample Test Cases:
Input 1:
(File info.txt contains:
Name: Rahul
Age: 23)
Output 1:
Characters: 19, Words: 4, Lines: 2

*/

#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter file name (e.g., info.txt): ");
    scanf("%99s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0, inWord = 0;
    int ch, lastChar = 0;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        lastChar = ch;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d, Words: %d, Lines: %d\n", characters, words, lines);
    return 0;
}
