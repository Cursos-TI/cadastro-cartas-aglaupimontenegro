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

  // Área para entrada de dados
    printf("\nCARTA 1\n");
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

    DensidadePopulacional1 = Populacao1 / area1;
    PIBperCapita1 = pib1 / Populacao1;

    printf("\nCARTA 2\n");
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
    
    DensidadePopulacional2 = Populacao2 / area2;
    PIBperCapita2 = pib2 / Populacao2;

  // Área para exibição dos dados da cidade
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo da Carta: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);

    printf("\nCARTA 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo da Carta: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
   
return 0;
} 