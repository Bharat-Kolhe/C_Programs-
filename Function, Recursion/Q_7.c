#include <stdio.h>
char toUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    return ch;
}
int main()
{
    char ch;
    scanf(" %c", &ch);
    printf("Uppercase = %c", toUpper(ch));
    return 0;
}
