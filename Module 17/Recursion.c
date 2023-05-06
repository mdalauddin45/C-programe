#include<stdio.h>
void fun(){
    printf("Fun\n");
    fun(); // recursion means that nijy k nijy call kora .. one kind of infite looop
}
int main()
{
    fun();
    return 0;
}