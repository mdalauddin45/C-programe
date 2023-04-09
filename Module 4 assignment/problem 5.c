#include<stdio.h>
int main(){
    int N,pair;
    scanf("%d",&N);
    pair=N-1000;
    if(N>1000 && pair>=500){
       printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }
    else if(N>1000){
        printf("I will buy Panjabi\n");
    }
    else{
        printf("Bad luck!");
    }
    return 0;
}