// 16. Sum Even + Mul Odd Digits
#include <stdio.h>
int main()
{
    int n, s = 0, p = 1;
    scanf("%d", &n);
    while (n)
    {
        int d = n % 10;
        if (d % 2 == 0)
            s += d;
        else
            p *= d;
        n /= 10;
    }
    printf("Sum of even = %d\nProduct of odd = %d", s, p);
    return 0;
}