#include<stdio.h>
int main(){
   int N,P;
    scanf("%d",&N);
    P=N-1000;
    if(N>1000){
        printf("I will buy Punjabi\n");
        if(P>=500){
          printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }   
    else{
        printf("Bad luck!");
    }
    return 0;
}