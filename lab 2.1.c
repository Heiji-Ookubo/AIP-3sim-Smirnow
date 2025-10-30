#include <stdio.h>

int main(void)
{
    int x, z;
    scanf("%d", &x);
    scanf("%d", &z);
    int F = (x > z && z > 1)?((x-z)/(z-1)):(((x <= 0) && (z < 0))?(2*x*z):(x+1));
    printf("%d", F);
    return 0;
}
