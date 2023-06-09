#include<stdio.h>
int main()
{
   int x;
   scanf("%d",&x);
   for(int i=0;i<x;i++)
   {
     int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
   }
    return 0;
}