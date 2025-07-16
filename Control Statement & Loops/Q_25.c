// 25. Prime 1 to 300
#include <stdio.h>
int main()
{
    for (int i = 2; i <= 300; i++)
    {
        int p = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }
        if (p)
            printf("%d ", i);
    }
    return 0;
}
