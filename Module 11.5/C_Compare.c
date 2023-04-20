#include<stdio.h>
#include<string.h>
int main()
{
    char x[20],y[20];
    scanf("%s %s",x,y);
    int v=strcmp(x,y);
    if(0>v){
        printf("%s",x);
    }
    else if (0<v)
    {
        printf("%s",y);
    }else{
        printf("%s",x);
    }
    
    return 0;
}