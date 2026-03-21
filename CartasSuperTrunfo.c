#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    char NomedaCidade1[50], NomedaCidade2[50];
    int Populacao1, Populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;
    float Superpoder1, Superpoder2;

  // Área para entrada de dados
    printf("\n***CARTA 1***\n");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", Codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", NomedaCidade1);
    printf("Populacao: ");
    scanf("%d", &Populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em milhoes): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    DensidadePopulacional1 = (float) Populacao1 / area1;
    PIBperCapita1 = pib1 / (float) Populacao1;
    Superpoder1 = Populacao1 + area1 + pib1 + pontosTuristicos1 + PIBperCapita1 + (1 / DensidadePopulacional1);

    printf("\n***CARTA 2***\n");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado2);
    printf("Codigo da Carta (ex: B01): ");
    scanf("%3s", Codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", NomedaCidade2);
    printf("Populacao: ");
    scanf("%d", &Populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em milhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
    DensidadePopulacional2 = (float) Populacao2 / area2;
    PIBperCapita2 = pib2 / (float) Populacao2;
    Superpoder2 = Populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapita2 + (1 / DensidadePopulacional2);

  // Área para exibição dos dados da cidade
    printf("\n***CARTA 1***\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo da Carta: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", Superpoder1);

    printf("\n***CARTA 2***\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo da Carta: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", Superpoder2);

  // Área para comparação de cartas
    printf("\n***COMPARAÇÃO DE CARTAS***\n");

    printf("Populacao: ");
    if (Populacao1 > Populacao2)
        printf("Carta 1 venceu\n");
    else if (Populacao2 > Populacao1)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    printf("Area: ");
    if (area1 > area2)
        printf("Carta 1 venceu\n");
    else if (area2 > area1)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    printf("PIB: ");
    if (pib1 > pib2)
        printf("Carta 1 venceu\n");
    else if (pib2 > pib1)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    printf("Pontos Turisticos: ");
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Carta 1 venceu\n");
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    printf("PIB per Capita: ");
    if (PIBperCapita1 > PIBperCapita2)
        printf("Carta 1 venceu\n");
    else if (PIBperCapita2 > PIBperCapita1)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    printf("Densidade Populacional: ");
    if (DensidadePopulacional1 < DensidadePopulacional2)
        printf("Carta 1 venceu\n");
    else if (DensidadePopulacional2 < DensidadePopulacional1)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    printf("Super Poder: ");
    if (Superpoder1 > Superpoder2)
        printf("Carta 1 venceu\n");
    else if (Superpoder2 > Superpoder1)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

return 0;
} 