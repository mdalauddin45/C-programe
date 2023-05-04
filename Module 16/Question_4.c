//  1.Has Return + Parameter
#include<stdio.h>
int sum(int x,int y){
    int sum=x+y;
    return sum;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s=sum(x,y);
    printf("%d",s);
    return 0;
}

// 2.Has Return + No Parameter
#include<stdio.h>
int sub(){
    int x,y;
    scanf("%d %d",&x,&y);
    int s=x-y;
    return s;
}
int main()
{
    int s=sub();
    printf("%d",s);
    return 0;
}

//3.No Return + Parameter
#include<stdio.h>
void mul(int x,int y){
    int m=x*y;
    printf("%d",m);
}
int main()
{
   int x,y;
   scanf("%d %d",&x,&y);
    mul(x,y);
    return 0;
}

// 4. No Return + No Parameter
#include<stdio.h>
void div(void){
    int x,y;
    scanf("%d %d",&x,&y);
    float result=x/y;
    printf("%.2f",result);
}
int main()
{
    div();
    return 0;
}