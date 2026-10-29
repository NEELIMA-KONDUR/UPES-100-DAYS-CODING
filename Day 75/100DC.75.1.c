// Q125 (File Handling)
// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
Explanation 1:
Output File (data.txt after execution): Hello world\nThis is appended text.
*/

#include <stdio.h>

int main() {
    char filename[100];
    char text[256];
    FILE *fp;

    printf("Enter filename to append to: ");
    scanf("%99s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    // The space before % prevents it from skipping due to leftover newline
    scanf(" %[^\n]", text); 

    // Appending on a new line to match the output explanation (\n before text)
    fprintf(fp, "\n%s", text); 

    printf("File updated successfully with appended text.\n");

    fclose(fp);
    return 0;
}
