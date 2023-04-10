#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
   if(a=='z'){
    printf("%c",a-25);
   }else if(a>='a' && a<='z'){
    printf("%c",a+1);
   }
    return 0;
}