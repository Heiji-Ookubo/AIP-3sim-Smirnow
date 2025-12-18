#include <stdio.h>
#include <math.h>

double f1(double x) {
    return x / exp(2 * x);
}

double f2(double x) {
    return 4 * cos(x) * cos(x);
}

double Integral(double (*f)(double), double a, double b, int N) {
    double h = (b - a) / N;  // шаг
    double sum = 0.0;

    for (int i = 0; i <= N; i++) {
        double x = a + i * h;
        double y = f(x);

        if (i == 0 || i == N) {
            sum += y;
        } else if (i % 3 == 0) {
            sum += 2 * y;
        } else {
            sum += 3 * y;
        }
    }

    return (3 * h / 8) * sum;
}

int main() {
    int N = 18;

    printf("\tИНТЕГРАЛ 1:\n");
    printf("\tf(x) = x / e^(2x)\n");
    printf("Пределы интегрирования: [%.1f, %.1f]\n", -1.0, 2.0);
    printf("Количество отрезков: N = %d\n", N);

    double result1 = Integral(f1, -1.0, 2.0, N);
    printf("Результат: %.6lf\n", result1);

    printf("\tИНТЕГРАЛ 2:\n");
    printf("\tf(x) = 4 * cos²(x)\n");
    printf("Пределы интегрирования: [%.1f, %.1f]\n", 0.0, 0.5);
    printf("Количество отрезков: N = %d\n", N);

    double result2 = Integral(f2, 0.0, 0.5, N);
    printf("Результат: %.6lf\n", result2);

    return 0;
}