#include<stdio.h>
int main()
{
    for(int i=1;i<=1000;i++)
    {
        printf("%d ",i);
        if(i%5==0) printf("\n");
    }
    return 0;
}