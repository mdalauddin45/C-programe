#include<stdio.h>
int fun(int x){
     printf("fun er addrress %p\n",&x);
     printf("fun er value %d\n",x);
}
int main()
{
    int x=10;
    printf("Main er addrress %p\n",&x);
    fun(x);
    return 0;
}
//value akoi holy they are cant alocated same memory address 