#include <stdio.h>
void printEven(int a, int b)
{
    if (a > b)
        return;
    if (a % 2 == 0)
        printf("%d ", a);
    printEven(a + 1, b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printEven(a, b);
    return 0;
}
