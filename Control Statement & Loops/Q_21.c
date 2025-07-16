// 21. Overtime Pay
#include <stdio.h>
int main()
{
    int h, pay;
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &h);
        pay = (h > 40) ? (h - 40) * 12 : 0;
        printf("Employee %d Overtime Pay = %d\n", i, pay);
    }
    return 0;
}