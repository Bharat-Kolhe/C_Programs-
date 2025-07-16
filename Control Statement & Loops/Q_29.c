// Pascal's Triangle

// 1
// 1 1
// 1 2 1
// 1 3 3 1

#include <stdio.h>

int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

int comb(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int rows = 4;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", comb(i, j));
        }
        printf("\n");
    }
    return 0;
}
