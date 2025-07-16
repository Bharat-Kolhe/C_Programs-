#include <stdio.h>
int main()
{
    float basic, da, hra, gross;
    scanf("%f", &basic);
    da = 0.40 * basic;
    hra = 0.20 * basic;
    gross = basic + da + hra;
    printf("Gross Salary = %.2f", gross);
    return 0;
}
