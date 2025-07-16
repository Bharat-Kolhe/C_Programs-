#include <stdio.h>
int sum(int arr[], int i, int n)
{
    if (i == n)
        return 0;
    return arr[i] + sum(arr, i + 1, n);
}
int main()
{
    int arr[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", sum(arr, 0, n));
    return 0;
}
