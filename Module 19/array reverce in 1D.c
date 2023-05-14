#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int j=n-1;
    // for(int i=0;i<j;i++){
    //     int temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    //     j--;  
    // }
    for(int i=n-1;i>=0;i--){
         printf("%d ",arr[i]);
    }
    return 0;
}