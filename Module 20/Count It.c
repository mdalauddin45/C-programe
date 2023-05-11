#include<stdio.h>
int main()
{
    char a[1001];
    gets(a);
    int capital=0;
    int smal=0;
    int space=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>='A' && a[i]<='Z'){
            capital++;
        }else if(a[i]>='a' && a[i]<='z'){
            smal++;
        }else if(a[i]==' '){
            space++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n",capital,smal,space);
    return 0;
}