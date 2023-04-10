#include<stdio.h>
int main()
{
    int a,r,x;
    scanf("%d",&a);
    r=a%10;
    x=a/10;
    // printf("%d\n",r);
    // printf("%d\n",x);
    if(r%x==0 || x%r==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}