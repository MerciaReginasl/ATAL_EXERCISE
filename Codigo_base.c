#include <stdio.h>

int potencia(int base,int expoente)
{
	if (expoente == 0){
		return 1;
	}
	return base * potencia(base,expoente-1);
}

int valorDoSimbolo(int x)
{
	int a;
	int b;
	a = x/2;
	b = (x%2 != 0 ? a + 1 : a);
	return potencia(2,a) * potencia(5,b);
}

int main(int argc, char *argv[])
{
  if (argc == 1){
	  printf("Você deve fornecer um símbolo romano!\n");
	  return -1;
  }

  char simbolos[7];
  simbolos[0] = 'I'; 
  simbolos[1] = 'V'; 
  simbolos[2] = 'X';
  simbolos[3] = 'L';
  simbolos[4] = 'C';
  simbolos[5] = 'D';
  simbolos[6] = 'M'; 
  for (int i = 0; i < 7; i++)
  {
    if (*argv[1] == simbolos[i])
    {
       printf("O símbolo %s é igual a %d\n",argv[1],valorDoSimbolo(i));
       return 0;
    }
  }
  printf("O símbolo que você digitou é inválido\n");
}
