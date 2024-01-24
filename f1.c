#include <stdio.h>

void somma(int a, int b, int c)
{
c = a + b;
printf("risultato: %d\n", c);
}

void differenza(int a, int b, int c)
{
c = a - b;
printf("risultato: %d\n", c);
}

void prodotto(int a, int b, int c)
{
c = a * b;
printf("risultato: %d\n", c);
}

void divisione(int a, int b, int c)
{
c = a / b;
printf("risultato: %d\n", c);
}

int main()
{
  int x;
  int y;
  char r; 
  printf("inserisci x\n"); 
  scanf(" %d", &x);
  printf("inserisci y\n"); 
  scanf(" %d", &y);
  printf("che operazione vuoi fare?");
  printf("digita:\n- '+' per la somma\n- '-' per la differenza\n- '*' per il prodotto\n- '/' per la divisione\n");
  scanf(" %c", &r);
  if(r == '+')
  {
    somma(x, y, r);
  }
  else if(r == '-')
  {
    differenza(x, y, r);
  }
  else if(r == '*')
  {
    prodotto(x, y ,r);
  }
  else if(r == '/')
  {
    divisione(x, y ,r);
  }
}