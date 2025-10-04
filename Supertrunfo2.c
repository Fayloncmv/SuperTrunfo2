#include <stdio.h>

int main() {
    // ======== Declara��o das vari�veis da Carta 1 ========
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // ======== Declara��o das vari�veis da Carta 2 ========
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // ======== Cadastro da Carta 1 ========
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o c�digo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a popula��o: ");
    scanf("%lu", &populacao1);

    printf("Digite a �rea (em km�): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilh�es de reais): ");
    scanf("%f", &pib1);

    printf("Digite o n�mero de pontos tur�sticos: ");
    scanf("%d", &pontosTuristicos1);

    // ======== C�lculos da Carta 1 ========
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    // ======== Cadastro da Carta 2 ========
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o c�digo da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a popula��o: ");
    scanf("%lu", &populacao2);

    printf("Digite a �rea (em km�): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilh�es de reais): ");
    scanf("%f", &pib2);

    printf("Digite o n�mero de pontos tur�sticos: ");
    scanf("%d", &pontosTuristicos2);

    // ======== C�lculos da Carta 2 ========
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // ======== Exibi��o das Cartas ========
    printf("\n\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("C�digo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Popula��o: %lu\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f bilh�es de reais\n", pib1);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km�\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("C�digo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Popula��o: %lu\n", populacao2);
    printf("�rea: %.2f km�\n", area2);
    printf("PIB: %.2f bilh�es de reais\n", pib2);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km�\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ======== Compara��es ========
    printf("\n\n=== Compara��o de Cartas ===\n");

    printf("Popula��o: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("�rea: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Tur�sticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

