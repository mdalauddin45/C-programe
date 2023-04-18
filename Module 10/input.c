#include<stdio.h>
#include<string.h>
int main()
{
    char a[18];
    // gets(a);
    fgets(a,30,stdin);
    a[17]='\0';         //nul = '\0'
    printf("%s",a);
    return 0;
}