#include<stdio.h>
int main()
{
    int x,y,t,t1;
    scanf("%d %d %d %d",&x,&y,&t,&t1);
    int chair=x*t1;
    int ans=(t-chair)/y;
    printf("%d Taka",ans);
    return 0;
}