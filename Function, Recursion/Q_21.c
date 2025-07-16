#include <stdio.h>
void display(int arr[], int i, int n)
{
    if (i >= n)
        return;
    printf("%d ", arr[i]);
    display(arr, i + 1, n);
}
int main()
{
    int arr[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    display(arr, 0, n);
    return 0;
}
