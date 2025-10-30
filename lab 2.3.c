#define PI 3.1415
#include <locale.h>
#include <stdio.h>
#include <math.h>


int main(void) {
    setlocale(LC_ALL, "rus");
    int R, a,d;
    scanf("%d", &R);
    scanf("%d", &a);
    scanf("%d", &d);
    double square_of_circle = PI * pow(R, 2);
    double square_of_triangle = (pow((double)a,2) * pow(3.0,(1.0/3.0))) / 4.0;
    double square_of_square = pow(d, 2);

    if(square_of_circle > square_of_triangle && square_of_circle > square_of_square){
        printf("1.Площадь круга больше");
    }else{
        if(square_of_triangle > square_of_circle && square_of_triangle > square_of_square){
            printf("2.Площадь треугольника больше");
        }else{
            if(square_of_square > square_of_circle && square_of_square > square_of_triangle){
                printf("3.Площадь квадрата больше");
            } else{
                printf("они равны");
            }
        }
    }

    return 0;
}