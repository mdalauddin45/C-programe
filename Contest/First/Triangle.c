#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=0 && a<=100 && b>=0 && b<=100 && c>=0 && c<=100){
        if(a==b && b==c && c==a && a!=0 && b!=0 && c!=0){
              printf("YES\n");
        }else{
            printf("NO\n");
        }
      
    }else{
        printf("NO\n");
    }
    return 0;
}