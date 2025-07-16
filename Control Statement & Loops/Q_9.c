// 9. Area vs Perimeter
#include <stdio.h>
int main()
{
    int l, b;
    scanf("%d%d", &l, &b);
    int a = l * b, p = 2 * (l + b);
    printf((a > p) ? "Area > Perimeter" : "Area <= Perimeter");
    return 0;
}