#include <stdio.h>
#include <math.h>
double sinx(double x)
{
    double term = x, sum = x;
    for (int i = 1; fabs(term) >= 0.00001; i++)
    {
        term *= -1 * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }
    return sum;
}
int main()
{
    double x;
    scanf("%lf", &x);
    printf("sin(%.2f) ≈ %.5f", x, sinx(x));
    return 0;
}
