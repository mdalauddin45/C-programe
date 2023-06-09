#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]%n==0)  printf("%d\n",arr[i]);
        printf("%d\n",arr[i]);
    }
    return 0;
}