#include <stdio.h>

int main() {
    int a[3][3] = {{2, 7, 1}, {3, 5, 4}, {8, 9, 6}};
    int rows = sizeof(a) / sizeof(a[0]);
    int cols = sizeof(a[0]) / sizeof(a[0][0]); 
    
    printf("rows: %d\n", rows);
    printf("columns: %d\n", cols);
    
    int largest = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }
    
    printf("Largest number is: %d\n", largest);

    return 0;
}
