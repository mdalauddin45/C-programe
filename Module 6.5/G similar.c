#include<stdio.h>
int main()
{
    int eye,mouth,body,result=0;
    scanf("%d %d %d",&eye,&mouth,&body);
    if((eye>=1 && mouth==0 && body>=1) || (eye>=1 && mouth>=1 && body>=1) ){
        result=result+1;
         printf("%d",result);
    }else{
        result=0;
         printf("%d",result);
    }
    // printf("%d",result);
    return 0;
}