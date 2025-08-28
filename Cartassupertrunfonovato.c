#include <stdio.h>

int main (){
    // variaveis carta 1
    char estado1[15];
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //variaveis carta 2
    char estado2[15];
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Entrada de Dados da Carta 1
    printf("Digite seu estado: "); ///sigla do estado
    scanf("%s", estado1);

    printf("Codigo: "); ///sigla do estado e um numeral
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area da cidade: ");
    scanf("%f", &area1);

    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // Entrada dos Dados da Carta 2
    printf("\nDigite seu estado: "); ///sigla do estado
    scanf("%s", estado2);

    printf("Codigo: "); ///sigla do estado e um numeral
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area da cidade: ");
    scanf("%f", &area2);

    printf("Pib: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibiçao da carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Quantidade de Pontos turisticos: %d\n", pontosturisticos1);

    // Exibiçao da carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Quantidade de Pontos turisticos: %d\n", pontosturisticos2);


    return 0;

}