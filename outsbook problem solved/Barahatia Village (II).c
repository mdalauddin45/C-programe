#include<stdio.h>
int main()
{
    int p,x;
    scanf("%d %d",&p,&x);
    int ans=(p*.01)*x;
    int ans2=x-ans;
    printf("%d\n",ans2);
    return 0;
}