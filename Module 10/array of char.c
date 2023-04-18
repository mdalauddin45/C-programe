#include<stdio.h>
int main()
{
    char a[5];
    for(int i=0;i<5;i++){
        scanf("%c",&a[i]);// input a l a u d output = a l a;
    }
    for(int i=0;i<5;i++){
        printf("%c",a[i]);
    }
    return 0;
}