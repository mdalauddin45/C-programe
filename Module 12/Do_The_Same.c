#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
   for(int i=1;i<=y;i++){
     for(int j=1;j<=x;j++){
        printf("%d ",j);
    }
    printf("\n");
   }
    return 0;
}