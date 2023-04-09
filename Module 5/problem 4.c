//P. First digit !
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int r=a/1000;
    if(r%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}