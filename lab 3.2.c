#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1 > num2 && num1 > num3){
        max = num1;
    } else {
        if (num2 > num3 && num2 > num1){
            max = num2;
        } else {
            max = num3;
        }
    }
    int i=max;
    while (i>=1){
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0){
            printf("%d", i);
            break;
        }
        i--;
    }
    return 0;
}
