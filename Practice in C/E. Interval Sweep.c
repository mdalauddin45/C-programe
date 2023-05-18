#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    // non empty !0
    if(a==0 && b==0){
        printf("NO\n");
    }else if(abs(a-b)==1 || abs(a-b)==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
//in the c programming language, the use of the function abs in c is to return the absolute value of an integer 