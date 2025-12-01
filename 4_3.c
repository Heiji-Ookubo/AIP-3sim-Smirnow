#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    int **matrix;
    int i, j;
    int max_value;

    printf("Введите количество строк m: ");
    scanf("%d", &m);
    printf("Введите количество столбцов n: ");
    scanf("%d", &n);

    matrix = (int**)malloc(m * sizeof(int*));
    for(i = 0; i < m; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }

    printf("Введите элементы матрицы %dx%d:\n", m, n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nИсходная матрица:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    max_value = matrix[0][0];
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] > max_value) {
                max_value = matrix[i][j];
            }
        }
    }

    printf("\nМаксимальное значение: %d\n", max_value);
    printf("Индексы элементов с максимальным значением:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] == max_value) {
                printf("[%d][%d] ", i, j);
            }
        }
    }
    printf("\n");

    for(i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
