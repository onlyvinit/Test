#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    for (i = 0; i < rows; i++) {
    
        for (j = 0; j < i; j++) {
            printf(" "); 
        }
        // Print numbers
        for (j = 0; j < rows - i; j++) {
            printf("%d ", j % 2); 
        }
        printf("\n");
    }

    return 0;
}
