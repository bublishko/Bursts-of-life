#include<stdio.h>
int main(void)
{
    int var, var1;
    scanf("%d", &var);
    printf("%o", var);
    var1 = var <<= 2;
    printf("%X", var1);


}