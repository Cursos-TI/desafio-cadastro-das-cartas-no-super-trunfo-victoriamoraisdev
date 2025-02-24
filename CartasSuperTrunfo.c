#include <stdio.h>


//Criando as cartas
int main (){
    char paises[50], paises2[50];
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turisticos, turisticos2;
    float densidade, densidade2;
    float percapita, percapita2;

//Inicio        
    printf("--- BEM VINDO(A) AO TRUNFO ---\n");
    printf("OBS: - use o ponto [ex: 250.11]\n");
    printf("OBS: - não pule espaçoes [ex: RioDeJaneiro]\n\n");
 
//Primeira Carta
    printf("Insira as informações da carta 1\n");
    
    //País
    printf("Digite o nome do País: \n");
    scanf(" %s", &paises);

    //Código
    printf("Digite o código da carta [Ex:A01]: \n");
    scanf("%s", &codigo);
    
    //Cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade);

    //População
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    //Área
    printf("Digite a área[em km²] da cidade: \n");
    scanf(" %f", &area);

    //PIB
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    //Pontos Turísticos
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos);

    //Densidade
    densidade = populacao / area;

    //PIB per Capita
    percapita = (pib / populacao) * 1000000000;

//Segunda Carta
    printf("\nInsira as informações da carta 2\n");
    
    //País
    printf("Digite o nome do País: \n");
    scanf(" %s", &paises2);

    //Código
    printf("Digite o código da carta [Ex:A01]: \n");
    scanf("%s", &codigo2);
    
    //Cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

    //População
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    //Área
    printf("Digite a área[em km²] da cidade: \n");
    scanf(" %f", &area2);
    
    //PIB
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);
    
    //Pontos Turísticos
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos2);

    //Densidade
    densidade2 = populacao2 / area2;

    //PIB per Capita
    percapita2 = (pib2 / populacao2) * 1000000000;

    //Mostrando carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", paises);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);
    printf("Dencidade: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n\n", percapita);

    //Mostrando carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", paises2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Dencidade: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", percapita2);
    
    
    return 0;
    
}