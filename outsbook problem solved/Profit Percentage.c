#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int ans=(100*(y-x))/x;
    printf("%d\n",ans);
    return 0;
}