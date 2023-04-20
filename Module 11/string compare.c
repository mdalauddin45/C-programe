#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    printf("%d",v);
    if(0>v){
        printf("A Choto\n");
    }
    else if(0<v){
        printf("B Choto\n");
    }else{
        printf("Same\n");
    }
    return 0;
}