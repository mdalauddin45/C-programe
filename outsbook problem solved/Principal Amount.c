#include<stdio.h>
int main()
{
    int p,i,y;
    scanf("%d %d %d",&p,&i,&y);
    int a=p*y;
    int b=(i*100)/a;
    printf("%d\n",b);
    return 0;
}