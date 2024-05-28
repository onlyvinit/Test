#include <stdio.h>

int main() {
    int a[] = {2, -4, 1, -3, -5};
    int n = sizeof(a) / sizeof(a[0]); 
    
    printf("Negative numbers: [");
    int negative = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (negative) {
                printf(", ");
            }
            printf("%d", a[i]);
            negative = 1;
        }
    }
    printf("]\n");

    return 0;
}
