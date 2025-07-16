#include <stdio.h>
int cubeSum(int n)
{
    if (n == 0)
        return 0;
    int d = n % 10;
    return d * d * d + cubeSum(n / 10);
}
int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
    {
        if (i == cubeSum(i))
            printf("%d ", i);
    }
    return 0;
}
