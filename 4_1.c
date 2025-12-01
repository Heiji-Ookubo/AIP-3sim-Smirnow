#include <stdio.h>

int main() {
    int B[50];
    int i, j, n = 50;

    printf("Введите 50 элементов массива:\n");
    for(i = 0; i < n; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    printf("Исходный массив:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    for(i = 0; i < n; i++) {
        if(B[i] % 3 == 0 || B[i] % 5 == 0) {
            for(j = i; j < n - 1; j++) {
                B[j] = B[j + 1];
            }
            n--;
            i--;
        }
    }

    printf("Массив после удаления элементов кратных 3 или 5:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}