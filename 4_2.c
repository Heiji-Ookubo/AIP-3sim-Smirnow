#include <stdio.h>

#define ROWS 8
#define COLS 8

int main() {
    float A[ROWS][COLS];
    int i, j;

    printf("Введите элементы матрицы 8x8:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("\nИсходная матрица:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }

    for(j = 0; j < COLS - 1; j++) {
        for(i = 0; i < ROWS; i++) {
            A[i][j] = A[i][j] - A[ROWS-1][j];
        }
    }

    printf("\nПреобразованная матрица:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}