#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000){
        printf("Cox's Bazar jaabo ");
        if(tk>=10000){
            printf("Saint martin jabo");
        }
        else{
            printf("parot asbo");
        }
    }
    else{
        printf("kotaw jabo nah");
    }
    return 0;
}