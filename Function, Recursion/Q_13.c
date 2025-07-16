#include <stdio.h>
int sumEven(int a, int b)
{
    if (a > b)
        return 0;
    return (a % 2 == 0 ? a : 0) + sumEven(a + 1, b);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", sumEven(a, b));
    return 0;
}
