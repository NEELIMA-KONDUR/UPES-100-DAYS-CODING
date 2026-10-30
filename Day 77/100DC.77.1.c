// Q127 (File Handling)
// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
Explanation 1:
All lowercase letters in input.txt are converted to uppercase using character manipulation before writing to output.txt.
*/

#include <stdio.h>

int main() {
    FILE *inFile, *outFile;
    int ch;

    // Open input.txt for reading
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    // Open output.txt for writing
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Cannot create output.txt!\n");
        fclose(inFile);
        return 1;
    }

    // Read character by character until End of File
    while ((ch = fgetc(inFile)) != EOF) {
        // Convert lowercase to uppercase using ASCII logic
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, outFile);
    }

    printf("File text converted to uppercase successfully! Check output.txt.\n");

    fclose(inFile);
    fclose(outFile);
    return 0;
}
