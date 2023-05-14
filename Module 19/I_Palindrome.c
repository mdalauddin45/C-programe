#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s",&a);
    strcpy(b,a);
   int i=0,j=strlen(a)-1;
   while (i<j)
   {
    int temp=b[i];
    b[i]=b[j];
    b[j]=temp;
    i++;
    j--;
   }
   if(strcmp(a,b)==0){
    printf("YES\n");
   }else{
    printf("NO\n");
   }
    return 0;
}