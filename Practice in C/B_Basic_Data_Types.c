#include<stdio.h>
int main()
{
    int a;
    long long int b;
    char ch;
    float c;
    double d;
    scanf("%d %lld %c %f %lf",&a,&b,&ch,&c,&d);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n",a,b,ch,c,d);
    return 0;
}