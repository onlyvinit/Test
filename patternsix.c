#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for (i = 1; i <= rows; i++) {
        
        for (k = 1; k <= rows - i; k++) {
            printf("  "); 
        }
        
        for (j = i; j <= 2 * i - 1; j++) {
            printf("%d ", j);
        }
    
        for (j = 2 * i - 2; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
