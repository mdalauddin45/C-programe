#include<stdio.h>
int main()
{
    int n,X1,X2;
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
       X1=0;
       X2=0;
        for(int j=0;j<2;j++){
            X1=arr[i][0];
        }   
        for(int j=0;j<2;j++){
            X2=arr[i][1];
        }   
        if(X1>X2){
            tiger++;
        }else if (X1<X2)
        {
            pathan++;
        }else{
            draw++;
        }
    }
    if(pathan>tiger){
        printf("Pathan\n");
    }else if(tiger>pathan){
        printf("Tiger\n");
    }else{
        printf("Draw\n");
    }
    return 0;
}