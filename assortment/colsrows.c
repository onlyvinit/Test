#include <stdio.h>

int main() {
    int a[3][3] = 
    {{2, 7, 1}, 
    {3, 5, 4},
    {8, 9, 6}};

    int rows = 3; 
    int cols = 3; 
    
    int row, col;
    printf("Enter the row number: ");
    scanf("%d", &row);
    printf("Enter the column number : ");
    scanf("%d", &col);
    
    
    printf("Elements of row %d: ", row);
    int rowSum = 0;
    for (int i = 0; i < cols; i++) {
        printf("%d ", a[row][i]);
        rowSum += a[row][i];
    }
    printf("\nSum of row %d: %d\n", row, rowSum);
    

    printf("Elements of column %d: ", col);
    int colSum = 0;
    for (int i = 0; i < rows; i++) {
        printf("%d ", a[i][col]);
        colSum += a[i][col];
    }
    printf("\nSum of column %d: %d\n", col, colSum);

    return 0;
}
