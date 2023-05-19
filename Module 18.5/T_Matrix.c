#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                x=x+arr[i][j];
            }
            if(i+j==n-1){
                y=y+arr[i][j];
            }
        } 
    }
    int sum=abs(x)+abs(y);
        printf("%d",sum);
    return 0;
}