#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    for(int i=1;i<=12;i++){
        r=n*i;
        printf("%d * %d = %d\n",n,i,r);
    }
    return 0;
}