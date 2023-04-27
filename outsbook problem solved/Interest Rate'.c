#include<stdio.h>
int main()
{
      int x,y,i;
    scanf("%d %d %d",&x,&y,&i);
    int a=x*y;
    int ans=(i*100)/a;
    printf("%d%%\n",ans);
    return 0;
}