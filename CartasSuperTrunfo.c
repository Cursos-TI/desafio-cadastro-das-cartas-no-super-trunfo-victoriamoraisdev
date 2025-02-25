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
    printf("OBS: - não pule espaçoes [ex: RioDeJaneiro]\n\n");
 
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
    printf("\n---Comparação das cartas---\n");
    printf("  - [1] = Carta 1 venceu\n");
    printf("  - [0] = Carta 2 venceu\n\n");
    
    r1 = populacao > populacao2;
    printf("População: %d\n", r1);
    r2 = area > area2;
    printf("Área: %d\n", r2);
    r3 = pib > pib2;
    printf("PIB: %d\n", r3);
    r4 = turisticos > turisticos2;
    printf("Pontos turísticos: %d\n", r4);
    r5 = densidade < densidade2;
    printf("Densidade: %d\n", r5);
    r6 = percapita > percapita2;
    printf("PIB per Capita: %d\n", r6);
    r7 = superpoder1 > superpoder2;
    printf("População: %d\n", r7);

    return 0;
    
}