#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int n;
    scanf("%d",&n);
    int arr[n];
    for(int j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    }
    return 0;
}