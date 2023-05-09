#include<stdio.h>
void fun(int i,int n){
    if(i==0) return;
    printf("%d ",i);
    fun(i-1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n,n);
    return 0;
}