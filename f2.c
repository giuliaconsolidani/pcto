#include <stdio.h>

int main()
{ 
    float l1;
    float l2;
    float l3;
    printf("lunghezza1:\n");
    scanf("%f", &l1);
    printf("lunghezza2:\n");
    scanf("%f", &l2);
    printf("lunghezza3:\n");
    scanf("%f", &l3);
    while(l1+l2>l3 && l2+l3>l1 && l1+l3>l2)
    {
        if(l1 == l2  && l1== l3 && l2 == l3)
        {
        printf("il triangolo è equilatero");
        }
        else if(l2 == l3 && l2 != l1 && l3 != l1 || l1 == l2 && l1 != l3 && l2!= l3 || l1 == l3 && l1 != l2 && l3 != l2)
        {
        printf("il triangolo è isoscele");
        }
        else if(l1 != l2 && l2 != l3 && l1 != l3)
        {
        printf("il triangolo è scaleno");
        }
    }
}