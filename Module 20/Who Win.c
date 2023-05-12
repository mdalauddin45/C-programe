#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int tiger=0;
    int pathan=0;
    int draw=0;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }   
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<2;j++){
            if(arr[i]>arr[j]){
                tiger++;
            }
            else if(arr[i]<arr[j]){
                pathan++;
            }
        }   
    }
    if(tiger==pathan){
        draw++;
    }
      printf("Tiger - %d\nPathan - %d\nDraw - %d\n",tiger,pathan,draw);

    return 0;
}