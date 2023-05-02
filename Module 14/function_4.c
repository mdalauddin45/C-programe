//no return + no parameter
#include<stdio.h>
void sum(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    printf("%d",s);
}
int main()
{
    sum();
    return 0;
}