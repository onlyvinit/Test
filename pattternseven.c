#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
        
            if (i == 1 || i == rows || j == 1 || j == rows) {
                printf("* ");
            } else {
                
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
