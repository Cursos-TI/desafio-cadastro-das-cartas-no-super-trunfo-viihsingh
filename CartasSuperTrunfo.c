#include <stdio.h>

int main (){

    printf("Desafio Cartas Super Trunfo- nivel novato \n")
 // variaveis carta 1
 char estado1[15];
 char codigo1[4];
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
 ////////////-----------////////////

 //// Entrada de Dados da Carta 1 ////

 printf("Digite seu estado: \n");
 scanf("%s", &estado1);

 printf("Codigo: \n");
 scanf("%s", &codigo1);

 printf("Nome da cidade: \n");
 scanf("%s", &cidade1);

 printf("Populacao: \n");
 scanf("%d", &populacao1);

 printf("Area da cidade: \n");
 scanf("%f", &area1);

 printf("Pib: \n");
 scanf("%f", &pib1);

 printf("Quantidade de pontos turisticos: \n");
 scanf("%d", &pontosturisticos1);

 ////////////------------////////////
 
 /// Entrada dos Dados da Carta 2///

 printf("Digite seu estado: \n");
 scanf("%s", &estado2);

 printf("Codigo: \n");
 scanf("%s", &codigo2);

 printf("Nome da cidade: \n");
 scanf("%s", &cidade2);

 printf("Populacao: \n");
 scanf("%d", &populacao2);

 printf("Area da cidade: \n");
 scanf("%f", &area2);

 printf("Pib: \n");
 scanf("%f", &pib2);

 printf("Quantidade de pontos turisticos: \n");
 scanf("%d", &pontosturisticos2);

 ////////////------------////////////

 /////// Dados da carta 1 ////////

  printf("Carta 1: \n");
  printf("Estado: \n"); 
  scanf("%c", &estado1); //sigla do estado

  scanf("%s", &codigo1); //sigla e um numeral

  printf("Nome da cidade:\n");
  scanf("%s,%c", &cidade1);

  printf("População: \n");
  scanf("%f", &populacao1);

  printf("Área em KM²: \n");
  scanf("%f", &area1);

  printf("Pib: \n");
  scanf("%f", &pib1);

  printf("Número de pontos turisticos: \n");
  scanf("%d", &pontosturisticos1);

 ////////////------------////////////

 ///// Dados da carta 2 ////

  printf("Carta 2: \n");
  printf("Estado: \n"); 
  scanf("%c", &estado2); //sigla do estado

  scanf("%s", &codigo2); //sigla e um numeral

  printf("Nome da cidade:\n");
  scanf("%s,%c", &cidade2);

  printf("População: \n");
  scanf("%f", &populacao2);

  printf("Área em KM²: \n");
  scanf("%f", &area2);

  printf("Pib: \n");
  scanf("%f", &pib2);

  printf("Número de pontos turisticos: \n");
  scanf("%d", &pontosturisticos2);

  ////////////------------////////////

 ///// Exibiçao da carta 1 ///////

 printf("\n=== Carta 1 ===\n");
 printf("Estado: %c\n", estado1);
 printf("Codigo: %s\n", codigo1);
 printf("Nome da cidade: %s\n", cidade1);
 printf("Populacao: %d\n", populacao1);
 printf("Area: %.2f km²\n", area1);
 printf("PIB: %.2f bilhoes de reais\n", pib1);
 printf('Quantidade de Pontos turisticos: %d\n', pontosturisticos1);

 ///// Exibiçao da carta 2 ///////

 printf("\n=== Carta 2 ===\n");
 printf("Estado: %c\n", estado2);
 printf("Codigo: %s\n", codigo2);
 printf("Nome da cidade: %s\n", cidade2);
 printf("Populacao: %d\n", populacao2);
 printf("Area: %.2f km²\n", area2);
 printf("PIB: %.2f bilhoes de reais\n", pib2);
 printf('Quantidade de Pontos turisticos: %d\n', pontosturisticos2);


}