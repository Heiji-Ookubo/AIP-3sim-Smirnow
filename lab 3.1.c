#include <stdio.h>

int main() {
    int num1, num2, nod;
    printf("vvedite chisl: ");
    scanf("%d %d",&num1,&num2);
    int min_num = (num1 < num2) ? num1 : num2;
    for (int i=2; i <= min_num; i++)
    {
        if (num1 %i == 0 && num2 %i == 0)
        {
            printf("%d i %d ne VP, nod raven %d.\n", num1, num2, i);
            return 0;
        }
    }
    printf("%d i %d VP, nod raven %d.\n", num1, num2);
    return 0;
}