#include<stdio.h>
void hello(){
    printf("Hello Start\n");
    printf("Hello End\n");
}
void world(){
     printf("World Start\n");
     hello();
    printf("world End\n");
}
int main()
{
     printf("main Start\n");
     world();
    printf("Main End\n");
    return 0;
}