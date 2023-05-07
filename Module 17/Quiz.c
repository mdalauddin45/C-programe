// #include<stdio.h>
// void gello()
// {
//     printf("Gello ");
// }
// void hello()
// {
//     gello();
//     printf("Hello ");
// }
// int main()
// {
//     printf("Main ");
//     hello();   
// }

// #include<stdio.h>
// void fun()
// {
//     printf("fun\n");
//     fun();
// }
// int main()
// {
//     fun();   
// }

#include<stdio.h>
void f2()
{
    printf("f1 ");
}
void f1()
{
    printf("f2 ");
    f2();
}
int main()
{
    printf("Main ");
    f1();   
}