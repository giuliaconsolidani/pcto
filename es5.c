#include <stdio.h>

int main()
{
    float c;
    float f;
    float k;
    f = 9/5* c +32;
    k = c+273.15;
    printf(" temperatura in c\n");
    scanf(" %f", &c );
    printf(" f: %f, k: %f", f, k);
    if(c < -273.15)
    {
        printf(" sbagliato");
    }
    else
    {
        printf(" giusto");
    }
    return (0);
    }