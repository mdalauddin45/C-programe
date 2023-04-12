#include<stdio.h>
int main()
{
   long long int n,sum=0;
    scanf("%lld",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
          sum+=arr[i];
    }
     if(sum<0){
        sum=sum*(-1); 
    }
     printf("%lld\n",sum);

    return 0;
}