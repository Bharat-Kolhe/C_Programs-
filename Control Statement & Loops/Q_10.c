// 10. Colinear Points
#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    printf(area == 0 ? "Colinear" : "Not Colinear");
    return 0;
}