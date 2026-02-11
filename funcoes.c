#include <stdio.h>
#include "funcoes.h"

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
	return a - b;
}

int multiplicacao(int a, int b) {
	return a*b;
}

double divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: divisão por zero!\n");
        return 0;  // ou outra forma de tratar
    }
    return (double)a / b;
}

