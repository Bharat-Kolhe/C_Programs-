// 15. Cubes Divisible by 3
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (i % 3 == 0)
            printf("%d ", i * i * i);
    return 0;
}