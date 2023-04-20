#include<stdio.h>
int main()
{
    int n, p=0,negative=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            p++;
        }else{
            negative++;
        }
    }
    printf("%d %d\n",p,negative);
    return 0;
}