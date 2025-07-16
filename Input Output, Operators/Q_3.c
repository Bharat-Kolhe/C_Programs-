#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum = %d", sum);
    return 0;
}
