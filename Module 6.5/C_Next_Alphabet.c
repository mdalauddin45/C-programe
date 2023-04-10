#include<stdio.h>
int main()
{
    int a;
    scanf("%c",&a);
    if(a='z'){
       int ans=a-25;
        printf("%c",ans);
    }
    else{
        int ans=a+1;
        printf("%c",ans);
    }
    return 0;
}