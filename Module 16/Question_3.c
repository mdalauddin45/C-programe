#include <stdio.h>
int count_before_zero(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
            return count;
            
        count++;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", count_before_zero(arr, n));

    return 0;
}