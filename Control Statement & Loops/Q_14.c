// 14. Sum of Squares up to n
#include <stdio.h>
int main()
{
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        s += i * i;
    printf("%d", s);
    return 0;
}