#include <stdio.h>

int main()
{ 
    
    int prezzou = 5;
    float tot;
    int pezzi;
    printf(" numero di pezzi\n");
    scanf(" %d", &pezzi);
    
    while (pezzi>0)
    { 
      if(pezzi<50 && pezzi>=30)
      {
        tot = 5*pezzi/10;
        printf(" tot: %f",tot);
      }
      else if(pezzi>=50)
      {
        tot = 5*pezzi*100/15;
        printf(" tot: %f", tot);
      } 
      else if(pezzi<=30)
      {
        tot = 5*pezzi;
        printf(" tot: %f", tot);
      } 
      printf(" numero di pezzi\n");
      scanf(" %d", &pezzi);
    }
     return(0);
  }  