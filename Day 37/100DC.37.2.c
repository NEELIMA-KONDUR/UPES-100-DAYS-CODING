// Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d%c", mat[i][j], (i == r - 1) ? '\n' : ' ');
        }
    }
    return 0;
}
