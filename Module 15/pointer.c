#include<stdio.h>
int main()
{
    int x=100;
    int *p=&x;
    // printf("%p\n",&p);
    *p=500;

    // x and *p they are same
    printf("%d",x);
    return 0;
}