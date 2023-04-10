#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int sub=a-b;
        printf("%d\n",sub);
    }else{
        printf("0\n");
    }
    return 0;
}