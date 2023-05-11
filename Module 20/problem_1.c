#include<stdio.h>
int main()
{
    int t,s,a,b,c;
    scanf("%d %d %d %d %d",&t,&s,&a,&b,&c);
    int d=s-(a+b+c);
    printf("%d\n",d);
    return 0;
}