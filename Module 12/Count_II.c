#include<stdio.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int i=0,count=0;
   while (a[i]) {
    if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] =='o' || a[i] == 'u')
      count++;
      i++;
  }
  printf("%d",count);
    return 0;
}