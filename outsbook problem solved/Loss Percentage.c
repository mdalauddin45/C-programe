#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int ans=(100*(x-y))/x;
    printf("%d\n",ans);
    return 0;
}