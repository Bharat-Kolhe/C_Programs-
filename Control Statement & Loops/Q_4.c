// 4. Day on 1st Jan of Given Year
#include <stdio.h>
int main()
{
    int y, d = 1;
    scanf("%d", &y);
    for (int i = 1900; i < y; i++)
        d += ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) ? 2 : 1;
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("%s", days[d % 7]);
    return 0;
}