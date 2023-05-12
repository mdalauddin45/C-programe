#include<stdio.h>
int main()
{
    int n,m1,m2;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int x=0;
    int y=0;
    m1=(n/2);
    m2=m1+1;
    for(int i=0;i<n;i++){
          if(n%2==0){
             x=arr[m1-1];
             y=arr[m2-1];
        }else{
             x=arr[m2-1];
        }
    }
    if(x && y){
         printf("%d %d\n",x,y);
    }else{
    printf("%d\n",x);
    }
    return 0;
}