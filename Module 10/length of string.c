// type no 1
// #include<stdio.h>
// int main()
// {
//     char a[100];
//     scanf("%s",a);
//     int count=0;
//     for(int i=0;a[i]!='\0';i++){
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }

// type no 2

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int countA=strlen(a);
    printf("%d",countA);
    return 0;
}