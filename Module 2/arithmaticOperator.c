// + = sum
// - = sub
// * = multipli
// / = divided
// % = bag ses

#include<stdio.h>
int main()
{
    int a=3,b=20;
    int sum=a+b;
    int sub=b-a;
    int mul=a*b;
    float dvb= b*1.0/a;
    int mod= b%a;
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%f\n",dvb);
    printf("%d\n",mod);
    return 0;
}