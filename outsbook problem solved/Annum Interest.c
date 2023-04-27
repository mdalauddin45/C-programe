#include<stdio.h>
int main()
{
    int p,x,y;
    scanf("%d %d %d",&p,&x,&y);
    int ans=p*.01*x*y;
    printf("%d\n",ans);
    return 0;
}