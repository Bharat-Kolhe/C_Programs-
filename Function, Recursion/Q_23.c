#include <stdio.h>
int max(int arr[], int i, int n)
{
    if (i == n - 1)
        return arr[i];
    int m = max(arr, i + 1, n);
    return arr[i] > m ? arr[i] : m;
}
int min(int arr[], int i, int n)
{
    if (i == n - 1)
        return arr[i];
    int m = min(arr, i + 1, n);
    return arr[i] < m ? arr[i] : m;
}
int main()
{
    int arr[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Max: %d\nMin: %d", max(arr, 0, n), min(arr, 0, n));
    return 0;
}
