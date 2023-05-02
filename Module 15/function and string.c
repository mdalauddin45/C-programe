#include<stdio.h>
#include<string.h>
void fun(char arr[]){
    // printf("%d",strlen(arr));
        printf("%s",arr);
}
int main()
{
    char arr[20]="Hello";
    fun(arr);
    return 0;
}