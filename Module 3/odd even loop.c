#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++){
        if(i%2==0){
            printf("%d - even\n",i);
        }
        else{
            printf("%d - Odd\n",i);
        }
        // printf("%d\n",i);
    }
    return 0;
}