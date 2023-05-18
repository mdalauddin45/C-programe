#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==x && j==x){
                printf("X");
            }
            else if(i==j){
                printf("\\");
            }else if(i+j==n-1){
                printf("/");
            }
            else{
                 printf("*");
            }
        }
            
        printf("\n");
    }
    return 0;
}