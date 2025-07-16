#include <stdio.h>
void printWords(int n)
{
    char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n == 0)
        return;
    printWords(n / 10);
    printf("%s ", words[n % 10]);
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("zero");
    else
        printWords(n);
    return 0;
}
