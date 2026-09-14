#include <stdio.h>

int main() {
    int r, c;
    
    // Read number of rows and columns
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    // Read matrix elements
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Print matrix elements
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    
    return 0;
}
