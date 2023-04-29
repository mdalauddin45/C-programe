#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
       for(int j=i;j<=2*i-1;j++){
        printf("* ");
       }
       s++;
       printf("\n");
    }
    return 0;
}