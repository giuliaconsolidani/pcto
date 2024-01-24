#include <stdio.h>

int main()
{ 
    float lato1;
    float lato2;
    float lato3;
    float altezza;
    float perimetro;
    float area;
    printf("dimensione lato1\n");
    scanf("%f", &lato1);
    printf("dimensione lato2\n");
    scanf("%f", &lato2);
    printf("dimensione lato3\n");
    scanf("%f", &lato3);
    printf("dimensione altezza\n");
    scanf("%f", &altezza);
    perimetro = lato1+lato2+lato3;
    printf("perimetro: %f\n", perimetro);
    area = altezza*lato1;
    printf("area: %f\n", area);
    return(0);
  }  