#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d %d %d",&t,&x,&y);
    int ans=(t-(x+y))*12;
    printf("%d Taka",ans);
    return 0;
}