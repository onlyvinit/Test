#include <stdio.h>

int main() {
    int rows = 5;
    int startNum = 11;
    int currentNum = startNum;
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", currentNum);
            currentNum++;
        }
        printf("\n");
        startNum++;
        currentNum = startNum;
    }

    return 0;
}
