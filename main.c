/*Programa para ler  um n�mero indeterminado de dados, contendo, cada um, a idade de um indiv�duo.
O �ltimo dado, que n�o entra no c�lculo, cont�m valor negativo. Calcula e imprime a idade m�dia
do grupo de indiv�duos. Quando h� valor negativo na primeira vez, mostra mensagem "IMPOSSIVEL CALCULAR".*/

#include <stdio.h>

int main() {

    int idade, cont, soma;
    double media;

    printf("Digite as idades:");
    scanf("%d", &idade);

    soma = 0;
    cont = 0;

    while (idade >= 0) {
        soma = soma + idade;
        cont = cont + 1;
        scanf("%d", &idade);
    }
    if (cont == 0) {
        printf("Impossivel calcular\n");
    } else {
        media = (double)soma / cont;
        printf("Media = %.2lf\n", media);
    }
    return 0;
}
