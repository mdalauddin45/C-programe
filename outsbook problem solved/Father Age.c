#include<stdio.h>
int main()
{
    int x,y,m;
    scanf("%d %d %d",&x,&y,&m);
    int age1=x*3;
    int age2=(y*3)-m;
    int ans=age1-age2;
    printf("%d\n",ans);
    return 0;
}