#include<stdio.h>
int main()
{
    int x=10;
    // printf("%p\n",&x);
    int *p=&x;
    // printf("%p\n",&p);
    //dereference 
    // printf("%d",*p);
    *p=500;
    printf("%d",x);
    return 0;
}