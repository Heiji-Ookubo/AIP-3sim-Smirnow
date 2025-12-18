#include <stdio.h>

#define ROWS 7
#define COLS 8
#define SIZE_B 76

float findMaxNegativeMatrix(float mat[ROWS][COLS]) {
    float maxNeg = 0;
    int found = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (mat[i][j] < 0) {
                if (!found || mat[i][j] > maxNeg) {
                    maxNeg = mat[i][j];
                    found = 1;
                }
            }
        }
    }
    return found ? maxNeg : 0;
}

float findMaxNegativeArray(float arr[], int size) {
    float maxNeg = 0;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (!found || arr[i] > maxNeg) {
                maxNeg = arr[i];
                found = 1;
            }
        }
    }
    return found ? maxNeg : 0;
}

int main() {
    float A[ROWS][COLS];
    float B[SIZE_B];

    printf("Введите элементы матрицы A (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    printf("Введите элементы массива B (%d):\n", SIZE_B);
    for (int i = 0; i < SIZE_B; i++) {
        scanf("%f", &B[i]);
    }

    float maxNegA = findMaxNegativeMatrix(A);
    float maxNegB = findMaxNegativeArray(B, SIZE_B);
    float sum = maxNegA + maxNegB;

    printf("Наибольший отрицательный в A: %f\n", maxNegA);
    printf("Наибольший отрицательный в B: %f\n", maxNegB);
    printf("Их сумма: %f\n", sum);

    return 0;
}