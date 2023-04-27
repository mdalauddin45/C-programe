#include<stdio.h>
int main()
{
    int x,r;
    scanf("%d",&x);
    r=x*365;
    if(x<=300){
        printf("%d\n",r);
    }
    return 0;
}