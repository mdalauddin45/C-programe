#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,mol;
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    float div=a*1.0/b;
    mol=a%b;
    printf("The sum of two integer = %d \n",sum);
    printf("The sub of two integer = %d \n",sub);
    printf("The mul of two integer = %d\n",mul);
    printf("The div of two integer = %.2f\n",div);
    printf("The mol of two integer = %d\n",mol);
    return 0;
}