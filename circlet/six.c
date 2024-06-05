#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            printf("  ");
        }
        for (int k = i; k <= 5; k++) {
            printf("%d ", k);
        }
        for (int l = 5 - 1; l >= i; l--) {
            printf("%d ", l);
        }
        printf("\n");
    }
    return 0;
}
