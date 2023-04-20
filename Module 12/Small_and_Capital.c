#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int u=0,l=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>='A' && a[i]<='Z'){
            u++;
        }else if(a[i]>='a' && a[i]<='z'){
            l++;
        }
    }
     printf("%d %d\n",u,l);
    return 0;
}