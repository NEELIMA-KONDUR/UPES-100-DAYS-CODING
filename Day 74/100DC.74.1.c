// Q124 (File Handling)
// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
Explanation 1:
Expected File (destination.txt): Learning C File Handling
*/

#include <stdio.h>

int main() {
    char source_file[100], dest_file[100];
    FILE *src, *dest;
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", source_file);
    printf("Enter destination filename: ");
    scanf("%99s", dest_file);

    src = fopen(source_file, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    dest = fopen(dest_file, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", dest_file);

    fclose(src);
    fclose(dest);
    return 0;
}
