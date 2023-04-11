#include<stdio.h>
int main()
{
    long long int e,m,b;
    scanf("%lld %lld %lld",&e,&m,&b);
    long long int min=e;
    if(min>m){
        min=m;
    }
    if(min>b){
        min=b;
    }
    long long int body;
    if(min==e){
        body=e;
    }
    else if(min == m){
        body=m;
        long long int min2=e-m;
        long long int min3=b-m; 
        if(min2>min3 && min2/2>min3){
            min2=min3;
            body = body+2;
        }
        else if(min2==e-m && min2/2<min3){
            body=body+min2/2;
        }
    }
    else{
        body=b;
    }
    printf("%lld",body);
    return 0;
}