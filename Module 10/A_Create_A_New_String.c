#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s %s",a,b);
    int lenA=strlen(a);
    int lenB=strlen(b);
    printf("%d %d\n",lenA,lenB);
    printf("%s %s",a,b);
    return 0;
}