#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                printf("%d",arr[i][j]);
            }
        }
    }
    return 0;
}