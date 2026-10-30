// Q128 (File Handling)
// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
Explanation 1:
The program iterates through each character, counts vowels (A, E, I, O, U) and consonants, ignoring other symbols.
*/

#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename (e.g., text.txt): ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        // Check if the character is an alphabet letter using basic ASCII logic
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Check if it is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
