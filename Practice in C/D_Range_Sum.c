#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            sum=sum+arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",sum);
    }
    
    return 0;
}