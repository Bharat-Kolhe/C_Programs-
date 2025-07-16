// 5. Reverse and Palindrome
#include <stdio.h>
int main()
{
    int n, r = 0, t;
    scanf("%d", &n);
    t = n;
    while (t)
    {
        r = r * 10 + t % 10;
        t /= 10;
    }
    printf("Reverse = %d\n", r);
    printf(r == n ? "Palindrome" : "Not Palindrome");
    return 0;
}