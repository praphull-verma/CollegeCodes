#include<stdio.h>

int main() {
    int firstmatrix[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int secondmatrix[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int result[3][3] = {0}; // Initialize result matrix to 0

    // Matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += firstmatrix[i][k] * secondmatrix[k][j];
            }
        }
    }

    // Printing the result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
