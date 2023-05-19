#include<stdio.h>
int main()
{
    int x1,q1,r1,x2;
    scanf("%d %d %d %d",&x1,&q1,&r1,&x2);
    int x=(x1*q1)+r1;
    int q2=x/x2;
    int r2=x-(x2*q2);
    printf("%d %d\n",q2,r2);
    return 0;
}