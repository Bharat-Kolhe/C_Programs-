#include <stdio.h>
int sumN(int n)
{
    if (n == 0)
        return 0;
    return n + sumN(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sumN(n));
    return 0;
}
