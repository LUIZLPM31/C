#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Declaração das variáveis
    char estado [10];
    char carta[10];
    char cidade[50];
    int populacao, pturisticos;
    float area, pib, densidadeP, percapita, superpoder; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    //Interação inicial e coleta dos dados
    printf("\nSuperTrunfo Países\n");
    printf("\n--- Cadastro da carta ---\n");
    printf("Sigla do estado (ex:RJ): \n");
    scanf("%s", &estado);

    printf("Código da carta ex:A01: \n");
    scanf("%s", &carta);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]s", &cidade); 

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área (km²): \n");
    scanf("%f", &area);

    printf("PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pturisticos);

    //Nível Aventureiro
    //Cálculos
    densidadeP = (float) populacao / area;
    percapita = pib / (float)populacao;
    superpoder = (float) populacao + area + pib + (float)pturisticos + densidadeP + percapita;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Exibição dos Resultados
    printf("\n");
    printf("_________________________________________________________________________");
    printf("\n \n");
    printf("Dados Digitados: \n");
    printf("Estado: %s\n", estado);
    printf("Código da carta:  %s\n", carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadeP);
    printf("PIB: R$ %.2f \n", pib);
    printf("PIB per Capita: %.2f reais\n", percapita);
    printf("Pontos turisticos: %d\n", pturisticos);



    

    return 0;
}