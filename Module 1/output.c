#include<stdio.h>
int main()
{
    int rohim, korim;
    char c;
    float f;
    scanf("%d %d %c %f",&rohim, &korim, &c, &f);
    printf("%d %d %c %.2f",rohim,korim,c,f);
    return 0;
}