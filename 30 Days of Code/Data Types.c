#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int sum;
    double sum2;
    char ch[100];
    scanf("%d %lf %[^\t]s",&sum,&sum2,&ch);
    sum=i+sum;
    sum2=sum2+d;
    printf("%d\n%.1lf\n%s%s",sum,sum2,s,ch);
    return 0;
}