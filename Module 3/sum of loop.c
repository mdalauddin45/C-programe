#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=5;i++){
        // sum=sum+i;
        sum+=i;
        // printf("%d\n",sum); //output 1 3 6 10 15
    }
       printf("%d\n",sum); //output 15
    return 0;
}