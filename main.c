#include <stdio.h>
#include "funcoes.h"

int main(){
	printf("Projeto calculadora\n");

	int x = 3, y = 5;
  	printf("Soma: %d\n", soma(x, y));
	printf("Subtracao: %d\n", subtracao(x,y));
	printf("Multiplicação: %d\n", multiplicacao(x,y));
	printf("Divisão: %f\n", divisao(x,y));

	return 0;
}
