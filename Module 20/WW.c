#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int i=0;i<n;i++){
       for(int j=1;j<2;j++){
         scanf("%d",&arr[i][j]);
       }
    }
    for(int i=0;i<n;i++){
       for(int j=1;j<2;j++){
         printf("%d ",arr[i][j]);
       }
       printf("\n");
    }

    return 0;
}