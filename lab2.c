#include<stdio.h>
#include<math.h>
#define M_PI=3,14
int main(void) {
    double var, rad;
    double z, x;
    scanf("%lf", &var);
    rad = var * M_PI / 180;
    z = cos(rad) + sin(rad) + cos(3 * rad) + sin(3 * rad);
    x = 2 * sqrt(2) * cos(rad) * sin(M_PI / 4 + 2 * rad);
    printf("%f", z);
    printf("%f", x);
    return 0;

}