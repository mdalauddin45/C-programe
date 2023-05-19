#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    for(int k=0;k<a;k++){
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x,y=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            y=i+1;
        }
    }
    if(y>0){
        printf("Case %d: %d\n",k+1,y);
    }else{
        printf("Case %d: Not Found\n",k+1);
    }
    }
    return 0;
}