// 19. Fibonacci Check
#include <stdio.h>
int isFib(int n)
{
    int a = 0, b = 1, c;
    while (b < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return (b == n || n == 0);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf(isFib(n) ? "Fibonacci" : "Not Fibonacci");
    return 0;
}
