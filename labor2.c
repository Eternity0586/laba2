#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf ("Enter x {log2(2-sqrt(3)) <= x <= log2(2+sqrt(3))} ->"); // ввести X принадлежащий диапазону от логарифма 2-кор(3) до логарифма 2+кор(3)
    scanf ("%lf", &x);
    if (log2(2-sqrt(3)) <= x && x <= log2(2+sqrt(3)))
    {
        double y = (pow (2,x) + pow (2,-x))/2;
        double z = sqrt (2+y-pow(y,2));
        printf ("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf ("Incorect value");
    return 0;
}