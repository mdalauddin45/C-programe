#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];// n+1 cz isert korly akgor bary jaby tai;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p,v; // p=position v=value;
    scanf("%d %d",&p,&v);
    for(int i=n;i>=p+1;i--){
        arr[i]=arr[i-1]; 
    }
    arr[p]=v;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}