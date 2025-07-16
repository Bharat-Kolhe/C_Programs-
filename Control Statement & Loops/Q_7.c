// 7. Triangle Validity
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf((a + b + c == 180) ? "Valid" : "Invalid");
    return 0;
}