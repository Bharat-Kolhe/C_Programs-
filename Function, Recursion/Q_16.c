#include <stdio.h>
int digitSum(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + digitSum(n / 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digitSum(n));
    return 0;
}
