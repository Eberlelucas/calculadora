#include <stdio.h>
#include "funcoes.h"

int main(){
	printf("Projeto calculadora\n");
	
	double x = ler_double();
	double y = ler_double();
  	printf("Soma: %.2f\n", soma(x, y));
	printf("Subtracao: %.2f\n", subtracao(x,y));
	printf("Multiplicação: %.2f\n", multiplicacao(x,y));
	printf("Divisão: %.2f\n", divisao(x,y));

	return 0;
}
