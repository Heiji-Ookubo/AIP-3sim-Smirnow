#include <stdio.h>
#include <math.h>

#define SIZE_P 60
#define SIZE_M 70

float average(float arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    float P[SIZE_P], M[SIZE_M];

    printf("Введите элементы массива P (60):\n");
    for (int i = 0; i < SIZE_P; i++) {
        scanf("%f", &P[i]);
    }

    printf("Введите элементы массива M (70):\n");
    for (int i = 0; i < SIZE_M; i++) {
        scanf("%f", &M[i]);
    }

    float avgP = average(P, SIZE_P);
    float avgM = average(M, SIZE_M);

    int countP = 0, countM = 0;

    for (int i = 0; i < SIZE_P; i++) {
        if (fabs(P[i] - avgM) <= 2 * fabs(avgM)) {
            countP++;
        }
    }

    for (int i = 0; i < SIZE_M; i++) {
        if (fabs(M[i] - avgP) <= 3 * fabs(avgP)) {
            countM++;
        }
    }

    printf("Среднее P: %f\n", avgP);
    printf("Среднее M: %f\n", avgM);
    printf("Элементов P, отличающихся от среднего M не более чем вдвое: %d\n", countP);
    printf("Элементов M, отличающихся от среднего P не более чем втрое: %d\n", countM);

    return 0;
}