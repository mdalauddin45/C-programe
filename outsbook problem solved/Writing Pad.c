#include<stdio.h>
int main()
{
    int d,x,y;
    scanf("%d %d %d",&d,&x,&y);
    int ans=((x/d)/12)*y;
    printf("%d Taka",ans);
    return 0;
}