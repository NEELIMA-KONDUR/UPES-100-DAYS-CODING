// Q129 (File Handling)
// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
Explanation 1:
The program reads integers from the file, computes their total sum (150), and calculates the average (30.00).
*/

#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    printf("Enter filename (e.g., numbers.txt): ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // fscanf returns 1 if it successfully reads an integer
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No numbers found in the file.\n");
    }

    return 0;
}
