#include <stdio.h>

int main() {
    int a[][3] = {{2, 4, 1}, {3, 5, 4}, {8, 2, 6}};
    int rows = sizeof(a) / sizeof(a[0]); 
    int cols = sizeof(a[0]) / sizeof(a[0][0]); 
    
    int n[cols][rows]; 
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            n[j][i] = a[i][j];
        }
    }

    printf("Transpose matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }

    return 0;
}
