#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int index=1;
    for(i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            index=i+1;
        }
    }
    printf("%d %d",min,index);
   
    return 0;
}