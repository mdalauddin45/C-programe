#include<stdio.h>
void fun(int i){   
    printf("%d",i);
    if(i==1) return;
    printf(" ");
    fun(i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}