
// 6. Youngest of Three
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && a < c)
        printf("A is youngest");
    else if (b < c)
        printf("B is youngest");
    else
        printf("C is youngest");
    return 0;
}
