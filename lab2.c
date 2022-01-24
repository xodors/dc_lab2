#include <stdio.h>
#include <math.h>

int main()
{
    float a;//с плавающей точкой
    scanf("%f",&a);
    double z1 = (1-2*sin(a)*sin(a))/(1+sin(2*a));
    double z2 = (1-tan(a))/(1+tan(a));
    printf("%f %f",z1,z2);
    return 0;
}
