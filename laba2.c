#include <stdio.h>
#include <math.h>
int main()
{
double a;
printf ("Введите любое значение a -> ");
scanf ("%lf", &a);
double x;
printf ("Введите значение x {-2.0 < a^x+a^-x < 4.0} -> ");
scanf ("%lf", &x);
if (-2.0 < pow(a, x)+pow(a, -x) && pow(a, x)+pow(a, -x)< 4.0)
{
double y = 0.5*(pow(a, x)+pow(a, -x));
double z = sqrt(2+y-y*y);
printf ("y(x) = %lf\nz(y) = %lf\n", y, z);
}
else
printf ("Введено неправильное значение x!\n");
return 0;
}