#include <stdio.h>


//Criando as cartas
int main (){
    char paises[50], paises2[50];
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turisticos, turisticos2;
    float densidade, densidade2;
    float percapita, percapita2;
    float superpoder1, superpoder2;
    int r1, r2, r3, r4, r5, r6, r7;

//Inicio        
    printf("--- BEM VINDO(A) AO TRUNFO ---\n");
    printf("OBS: - use o ponto [ex: 250.11]\n");
    printf("OBS: - não pule espaçoes ou use (_) [ex: RioDeJaneiro] ou [ex: São_Paulo]\n\n");
 
//PSrimeira Carta
    printf("Insira as informações da carta 1\n");
    
    printf("Digite o nome do País: \n");
    scanf(" %s", &paises);

    printf("Digite o código da carta [Ex:A01]: \n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade);

    printf("Digite a população da cidade: \n");
    scanf("%u", &populacao);

    printf("Digite a área[em km²] da cidade: \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos);

    densidade = populacao / area;

    percapita = (pib / populacao) * 1000000000;

//Segunda Carta
    printf("\nInsira as informações da carta 2\n");
    
    printf("Digite o nome do País: \n");
    scanf(" %s", &paises2);

    printf("Digite o código da carta [Ex:A01]: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%u", &populacao2);

    printf("Digite a área[em km²] da cidade: \n");
    scanf(" %f", &area2);
    
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos2);

    densidade2 = populacao2 / area2;

    percapita2 = (pib2 / populacao2) * 1000000000;

    //SuperPoder
    superpoder1 = populacao + area + pib + turisticos + percapita + (1/densidade);

    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + percapita2 + (1/densidade2);

    //Comparação das cartas
    printf("\n---Comparação das cartas---\n\n");
    
    printf("Atributo: População\n");
    printf("Cara 1 - (%s): %u\n", cidade, populacao);
    printf("Cara 2 - (%s): %u\n", cidade2, populacao2);
    
   if (populacao > populacao2) {
        printf("Carta 1 (%s) venceu!\n\n", cidade);
   } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
   }

   printf("Atributo: Área\n");
    printf("Cara 1 - (%s): %.2f\n", cidade, area);
    printf("Cara 2 - (%s): %.2f\n", cidade2, area2);
    
   if (area > area2) {
        printf("Carta 1 (%.s) venceu!\n\n", cidade);
   } else {
        printf("Carta 2 (%.s) venceu!\n\n", cidade2);
   }

   printf("Atributo: PIB\n");
    printf("Cara 1 - (%s): %.2f\n", cidade, pib);
    printf("Cara 2 - (%s): %.2f\n", cidade2, pib2);
    
   if (pib > pib2) {
        printf("Carta 1 (%.s) venceu!\n\n", cidade);
   } else {
        printf("Carta 2 (%.s) venceu!\n\n", cidade2);
   }

   printf("Atributo: Pontos turísticos\n");
    printf("Cara 1 - (%s): %d\n", cidade, turisticos);
    printf("Cara 2 - (%s): %d\n", cidade2, turisticos2);
    
   if (turisticos > turisticos2) {
        printf("Carta 1 (%s) venceu!\n\n", cidade);
   } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
   }

   printf("Atributo: Densidade\n");
    printf("Cara 1 - (%s): %.2f\n", cidade, densidade);
    printf("Cara 2 - (%s): %.2f\n", cidade2, densidade2);
    
   if (densidade < densidade2){
        printf("Carta 1 (%s) venceu!\n\n", cidade);
   } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
    return 0;
   }

   printf("Atributo: PIB per Capita\n");
    printf("Cara 1 - (%s): %.2f\n", cidade, percapita);
    printf("Cara 2 - (%s): %.2f\n", cidade2, percapita2);
    
   if (percapita > percapita2) {
        printf("Carta 1 (%s) venceu!\n\n", cidade);
   } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
   }

   printf("Atributo: Super Poder\n");
    printf("Cara 1 - (%s): %.2f\n", cidade, superpoder1);
    printf("Cara 2 - (%s): %.2f\n", cidade2, superpoder2);
    
   if (superpoder1 > superpoder2) {
        printf("Carta 1 (%s) venceu!\n\n", cidade);
   } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
   }

}