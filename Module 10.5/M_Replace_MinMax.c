#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
    }

    return 0;
}