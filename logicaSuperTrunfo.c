#include <stdio.h>

// Programa para comparar duas cartas do Super Trunfo
int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 * 1000000000 / populacao1;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Exibição das informações calculadas
    printf("\nInformações calculadas:\n");
    printf("Carta 1 - Densidade Populacional: %.2f hab/km² | PIB per capita: %.2f R$\n", densidade1, pibPerCapita1);
    printf("Carta 2 - Densidade Populacional: %.2f hab/km² | PIB per capita: %.2f R$\n", densidade2, pibPerCapita2);

    // Comparação (atributo escolhido: População)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", nomeCidade2, estado2, populacao2);

    // Lógica de decisão usando if-else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! As duas cidades têm a mesma população.\n");
    }

    return 0;
}
