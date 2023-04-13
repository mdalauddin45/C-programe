#include<stdio.h>
int main()
{
    double meal,total;
    int tip,tax;
    scanf("%lf %d %d",&meal,&tip,&tax);
    total=meal+(tip*meal*0.01)+(tax*meal*0.01);
    printf("%.lf",total);
    return 0;
}