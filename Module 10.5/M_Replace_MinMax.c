#include<stdio.h>
int main(){
    int a,i,b[100000],min=100001,max=-100001;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        if(b[i]<min){
            min = b[i];
        }
        if(b[i]>max){
            max = b[i];
        }
    }
    for(i=0;i<a;i++){
        if(b[i]==max){
            b[i]=min;
        }
        else if(b[i]==min){
            b[i]=max;
        }
        printf("%d ",b[i]);
    }
    return 0;
}