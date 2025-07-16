// 13. Digit Count in Number
#include <stdio.h>
int main()
{
    int n, d, c = 0;
    scanf("%d%d", &n, &d);
    int t = n;
    while (t)
    {
        if (t % 10 == d)
            c++;
        t /= 10;
    }
    printf("Count = %d", c);
    return 0;
}