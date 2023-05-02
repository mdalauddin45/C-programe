#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    // printf("0th index er address %p\n",&arr[0]);
    // printf("0th index er address %p\n",&arr);
    // printf("0th index er value %d\n",*arr);
    // printf("1st index er value %d\n",*(arr+1));
    printf("%d\n",*(arr+1));
    printf("%d\n",*(1+arr));
    printf("%d\n",arr[1]);
    printf("%d\n",1[arr]);
    return 0;
}