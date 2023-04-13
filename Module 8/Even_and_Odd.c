#include<stdio.h>
int main()
{
    int n,odd=0,even=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       if(arr[i]%2==0){
        even=even+arr[i];
       }
       else{
        odd=odd+arr[i];
       }
    }
     printf("%d %d\n",even,odd);
    return 0;
}