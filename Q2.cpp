#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    
 float salbruto, prestacao, porcent;
 
 printf("Informe o salario bruto: ");
 scanf("%f",&salbruto);
 
 printf("Informe o valor da prestacao: ");
 scanf("%f",&prestacao);
 
 porcent = salbruto * 0.20;
 
 if (prestacao > porcent)
 
 printf("\nEmprestimo não pode ser concedito.n\n");
 
 else
 
 printf("\nEmprestimo pode ser concedido");
 
 system("PAUSE");
 
 return 0;
}
