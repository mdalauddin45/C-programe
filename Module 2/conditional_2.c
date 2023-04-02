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
    else if(tk>=20){
        printf("Ice cream Khabo");
    }
    else{
        printf("Kichu khaibo nah bro");
    }
    return 0;
}