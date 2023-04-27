#include<stdio.h>
int main()
{
    int r1,r2,avg1,avg2;
    scanf("%d %d",&r1,&r2);
    avg1=r1*6;
    avg2=r2*4;
    int ans=(avg1+avg2)/10;
    printf("%d\n",ans);
    return 0;
}