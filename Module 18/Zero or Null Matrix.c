#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int element=row*col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0){
                count++;
            }
            // scanf("%d",&arr[i][j]);
        }
    }
    if(count==element){
       printf("Zero Matrix\n"); 
    }
    else{
        printf("Not Zero Matrix\n");
    }
    return 0;
}