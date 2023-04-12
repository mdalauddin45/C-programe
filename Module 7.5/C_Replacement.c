#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans=2;
        }
        else if(arr[i]==0){
            ans=0;
        }
        else if(arr[i]>0){
            ans=1;
        }
        printf("%d ",ans);
    }
    
    return 0;
}