// Pattern
// A -> BC -> DEFG -> FED -> CB -> A
#include <stdio.h>
int main()
{
    char ch = 'A';

    // Top Half
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }

    // Bottom Half
    ch = 'F';
    for (int i = 2; i >= 1; i--)
    {
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("%c", ch--);
        }
        printf("\n");
    }

    return 0;
}
