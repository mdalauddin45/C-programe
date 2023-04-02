#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100){
        printf("Burger khabo");
    }
    else if(tk>=50){
        printf("Fuskha Khabo");
    }
    else{
        printf("Kichu khaibo nah bro");
    }
    return 0;
}