#include<stdio.h>
#include<string.h>
int is_palindrome(char str[]){
    int i=0;
    int j=strlen(str)-1;
    while (j>i)
    {
       if(str[i++]!=str[j--]){
        return 0;
       }
    }
    return 1;
    
}
int main()
{
    char ch[100];
    scanf("%s",ch);
    if(is_palindrome(ch)){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    };
    return 0;
}