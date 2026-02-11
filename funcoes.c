#include <stdio.h>
#include "funcoes.h"

int soma(double a, double b) {
    return a + b;
}

int subtracao(double a, double b) {
	return a - b;
}

int multiplicacao(double a, double b) {
	return a*b;
}

double divisao(double a, double b) {
    if (b == 0) {
        printf("Erro: divisão por zero!\n");
        return 0;  // ou outra forma de tratar
    }
    return a / b;
}

