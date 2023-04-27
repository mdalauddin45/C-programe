#include<stdio.h>
int main()
{
    int x,m,y;
    scanf("%d %d %d",&x,&m,&y);
    int ans=(x*m)/(x+y);
    printf("%d\n",ans);
    return 0;
}