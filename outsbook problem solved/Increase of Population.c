#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a=x-y;
    float ans=a*.1;
    printf("%.0lf%%",ans);
    return 0;
}