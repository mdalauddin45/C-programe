#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,max=INT_MIN,min=INT_MAX;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(max<a){
            max=a;
        }
        if(a<min){
            min=a;
        }
    }
     printf("Max-%d\n Min-%d",max,min);
    return 0;
}