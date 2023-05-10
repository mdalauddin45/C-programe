#include<stdio.h>
void fun(int arr[],int n,int i,int s){
    if(i==n) return;
    s=s+arr[i];
    fun(arr,n,i+1,s);
    printf("%d ",s);
}
int main()
{
     int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fun(arr,n,0,sum);
    return 0;
}