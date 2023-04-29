#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int max=INT_MIN,min=INT_MAX;
    scanf("%d",&n);
    int a[100000];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
  
        if(a[i]>max){
            max=a[i];
        }else if (a[i]<min)
        {
            min=a[i];
        } 
    }
    for(int i=0;i<n;i++){
        if(a[i]==max){
            a[i]=min;
        }else if (a[i]==min)
        {
            a[i]=max;
        }
  printf("%d ",a[i]);
    }

    return 0;
}