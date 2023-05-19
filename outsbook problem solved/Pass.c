#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a=(x-y);
    int ans=(a*100)/x;
    printf("%d%%",ans);
    return 0;
}