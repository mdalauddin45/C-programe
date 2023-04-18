#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    scanf("%s",a);
    int sum=0;
    for(int i=0;i<strlen(a);i++){
        // printf("%d\n",a[i]-'0'); // 0 nah hy 48 biyog korly hoby
        sum=sum+(a[i]-'0');
    }
    printf("%d",sum);
    return 0;
}