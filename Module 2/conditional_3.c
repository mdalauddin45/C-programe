#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000){
        printf("Cox's Bazar jaabo\n");
        if(tk>=10000){
            printf("Saint martin jabo\n");
        }
        else{
            printf("parot asbo\n");
        }
    }
    else{
        printf("kotaw jabo nah\n");
    }
    return 0;
}