#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for (i = 1; i <= rows; i++) {
        
        for (k = 1; k <= rows - i; k++) {
            printf("   "); 
        }
    
        for (j = i; j <= rows; j++) {
            printf("%d  ", j); 
        }
        printf("\n");
    }

    return 0;
}
