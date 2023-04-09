//N. Char
#include<stdio.h>
int main()
{
    int a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
       int ans=a-32;
        printf("%c",ans);
    }
    else{
        int ans=a+32;
        printf("%c",ans);
    }
    return 0;
}