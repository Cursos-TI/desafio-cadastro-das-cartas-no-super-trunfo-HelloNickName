#include <stdio.h>

int main() {
    // Declaração das variáveis da primeira carta
    char codigo1[4];
    char nomeCidade1[50];
    char estado1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    unsigned long int populacao1;

    // Declaração das variáveis da segunda carta
    char codigo2[4];
    char nomeCidade2[50];
    char estado2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    unsigned long int populacao2;

    // Título inicial
    printf("=== Cadastro de Cartas do Super Trunfo ===\n\n");

    // Entrada de dados da primeira carta
    printf("Digite a letra do estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Digite a população da cidade da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada de dados da segunda carta
    printf("Digite a letra do estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Digite a população da cidade da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição do resumo das cartas cadastradas
    printf("\n=== Resumo das Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
