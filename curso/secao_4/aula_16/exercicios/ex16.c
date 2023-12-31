#include <stdio.h>
/*
Usando o switch, escreva um programa que leia
um inteiro entre 1 e 12 e imprima o mês correspondente
a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.
*/

int main() {
    int mesInt;

    printf("# Imprimir mês de acordo com seu número\n");

    printf("Digite um mês [1-12]: ");
    scanf("%d", &mesInt);

    switch (mesInt) {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Março");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("Mês inválido");
        break;
    }

    printf("\n\n");
    return 0;
}
