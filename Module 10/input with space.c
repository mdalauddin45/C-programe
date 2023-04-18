#include<stdio.h>
#include<string.h>
int main()
{
    char a[18];
    // gets(a); // ja input diba tai output diby size metter kory na
    fgets(a,10,stdin);
    printf("%s",a);
    return 0;
}