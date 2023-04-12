#include<stdio.h>
int main()
{
    char ch;
    scanf("%d",&ch);
    if((ch='YES') || (ch='yes') || (ch='yEs') || (ch='Yes') || (ch='YEs') || (ch='YeS')){
        printf("YES\n");
    }else{
        printf("NO");
    }
    return 0;
}