#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array number are ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("All Number of this array are ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        sum=sum+arr[i];
    }
      //reverse of array
    printf("\nReverse all Number of this array are ");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\nthe sum of array is %d",sum);
    return 0;
}