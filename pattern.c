#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    for (i = 1; i <= rows; i++) {
        int num = 41;
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
