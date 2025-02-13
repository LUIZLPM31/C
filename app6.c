#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int nJogador, nComputador, resultado;
    char tipoComparacao;
    
    srand(time(0));
    nComputador = rand() % 100 + 1; // numero entre 1 e 100

    //inicio do jogo
    printf("Bem-vindo ao jogo!\n");
    printf("Você deve escolher um numero e o tipo de comparacao.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &nJogador);

    //exibir número do computador
    printf("O número do computador é: %d\n", nComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior\n");
        resultado = nJogador > nComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor\n");
        resultado = nJogador < nComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual\n");
        resultado = nJogador == nComputador ? 1 : 0;
        break;
    
    default:
        printf("Opção inválida\n");
        resultado = 0;
        break;
    }

    if (resultado == 1)
    {
        printf("PARABÉNS, você venceu!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }
    
    return 0;
}