#include <stdio.h>
#include "funcoes.h"

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
	return a - b;
}

double  multiplicacao(double a, double b) {
	return a*b;
}

double divisao(double a, double b) {
    if (b == 0) {
        printf("Erro: divisão por zero!\n");
        return 0;  // ou outra forma de tratar
    }
    return a / b;
}

double ler_double() {
	double x;

	printf("Insira um número válido\n");

	while (scanf("%lf", &x) != 1) {
		printf("Digite um número válido\n");
		while (getchar() != '\n');
	}

	return x;
}
