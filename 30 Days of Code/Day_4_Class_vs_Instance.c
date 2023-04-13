#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int age[n];
    for(int i=0;i<n;i++){
        scanf("%d",&age[i]);
    }
    for(int i=0;i<n;i++){
        if(age[i]<0){
        printf("Age is not valid, setting age to 0.\n");
    }
    if(age[i]<13){
        printf("You are young..\n");
    }
     if (age[i]>=13 && age[i]<18)
    {
        printf("You are a teenager..\n");
    }else{
        printf("You are old..\n\n");
    }
    }
    return 0;
}