#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    int total = m1 + m2 + m3 + m4 + m5;
    float percent = (total / 500.0) * 100;
    printf("Total = %d\nPercentage = %.2f%%", total, percent);
    return 0;
}
