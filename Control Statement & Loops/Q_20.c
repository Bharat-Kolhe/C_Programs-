// 20. Worker Efficiency
#include <stdio.h>
int main()
{
    float h;
    scanf("%f", &h);
    if (h >= 2 && h < 3)
        printf("Highly Efficient");
    else if (h >= 3 && h < 4)
        printf("Improve Speed");
    else if (h >= 4 && h < 5)
        printf("Training Required");
    else if (h >= 5)
        printf("Leave Company");
    return 0;
}