#include <stdio.h>
int reverse(int n, int r)
{
    if (n == 0)
        return r;
    return reverse(n / 10, r * 10 + n % 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", reverse(n, 0));
    return 0;
}
