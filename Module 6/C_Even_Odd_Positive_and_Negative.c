#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int even=0,odd=0,positive=0,negative=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
       if(a%2==0){
        even++;
       }else{
        odd++;
       }
       if(a>0){
        positive++;
       }else if(a<0){
        negative++;
       }
    }
     printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,positive,negative);
    return 0;
}