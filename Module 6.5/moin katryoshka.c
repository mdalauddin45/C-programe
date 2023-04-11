#include <stdio.h>

int main()
{
    long long int eye, face, body, statue = 0;
    scanf("%lld %lld %lld", &eye, &face, &body);

    if (eye < face && eye < body)
    {
        statue = eye;
    }
    else if (body < eye && body < face)
    {
        statue = body;
    }
    else
    {
        statue += face;
        eye -= face;
        body -= face;
        if (eye / 2 <= body)
            statue += eye / 2;
        else
            statue += body;
    }
    printf("%d", statue);
    return 0;
}