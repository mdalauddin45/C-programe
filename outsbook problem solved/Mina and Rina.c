#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int ans=(x-y)/2;
    int ans2=x-ans;
    printf("%d %d\n",ans2,ans);
    return 0;
}