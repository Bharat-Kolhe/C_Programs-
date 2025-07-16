// 18. Number to Words
#include <stdio.h>
int main()
{
    int n, d, rev = 0;
    scanf("%d", &n);
    while (n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    while (rev)
    {
        d = rev % 10;
        char *w[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        printf("%s ", w[d]);
        rev /= 10;
    }
    return 0;
}
