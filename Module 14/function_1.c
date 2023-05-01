#include<stdio.h>
// return_type name(parametter){
//     code;
//     return what?
// } 
int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
   int s=sum(10,40);
   printf("%d",s);
    return 0;
}