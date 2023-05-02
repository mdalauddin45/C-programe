#include<stdio.h>
int x=500; //Global scop // Global variable
void fun(void){
    int s=100;
    printf("Fun er Address %p \n",&s);
    printf("x er Address %p \n",&x);
}
int main()
{
     int s=200;
    printf("Main er Address %p \n",&s);
    printf("x er Address %p \n",&x);
    fun();
    return 0;
}