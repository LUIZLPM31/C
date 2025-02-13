#include <stdio.h>

int main() {
    // Declaração das variáveis para cada atributo da cidade
    char nome[50];         
    int populacao;
    float area;
    double PIB;
    int pontosTuristicos;

    // Cadastro dos dados da cidade

    printf("Digite o nome da cidade: ");
    scanf(" %f", nome);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados cadastrados
    printf("--- Dados da Cidade ---");
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf\n", PIB);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    return 0;
}