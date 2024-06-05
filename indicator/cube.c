#include <stdio.h>

int main() {
    int arr[2][2]; 
    int result[2][2]; 

    
    printf("Enter elements of the 2x2 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element at position (%d, %d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = arr[i][j] * arr[i][j] * arr[i][j];
        }
    }

    printf("\nCube of the elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
