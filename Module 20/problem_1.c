#include<stdio.h>
int main()
{
    int row;
    scanf("%d",&row);
    int arr[row][4];
    for(int i=0;i<row;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int r,s;
    int result;
    for(int i=0;i<row;i++){
        s=0;
        r=0;
        for(int j=1;j<4;j++){
            s=s+arr[i][j];
        }
        for(int j=0;j<1;j++){
            r=r+arr[i][j];
        }
        result=r-s;
        printf("%d\n",result);
    }
    return 0;
}
