#include<stdio.h>
int main()
{
    long long int eye, mouth, b;
    scanf("%lld %lld %lld", &eye, &mouth, &b);

    long long int min = eye;
    if(min > mouth){
        min = mouth;
    }
    if(min>b){
        min = b;
    }

    long long int body;
     if(min==eye){
        body=eye;
     }
     else if(min == mouth){
        body = mouth;
        long long int min2 = eye-mouth;
        long long int min3 = b-mouth;
        if(min2 > min3 && min2/2 > min3){
            min2 = min3;
            body = body+min2;
        }
        else if(min2 == eye-mouth && min2/2 < min3){
            body = body+min2/2;
        }
     }
     else{
        body = b;
     }
    printf("%lld", body);
    return 0;
}