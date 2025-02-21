#include <stdio.h>


//Criando as cartas
int main (){
    char paises[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;

//Primeira Carta        
    printf("Insira as informações da carta 1\n\n");
    printf("OBS: - use o ponto [ex: 250.11]\n");
    printf("OBS: - não pule espaçoes [ex:RioDeJaneiro]\n\n");
    
    printf("Digite o nome do País: \n");
    scanf(" %s", &paises);

    printf("Digite o código da carta [Ex:A01]: \n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área[em km²] da cidade: \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos);

//Segunda Carta
    printf("\nInsira as informações da carta 2\n");
    
    printf("Digite o nome do País: \n");
    scanf(" %s", &paises);

    printf("Digite o código da carta [Ex:A01]: \n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área[em km²] da cidade: \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos);

    printf("\nCarta 1\n");
    printf("Estado: %s\n", paises);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", turisticos);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", paises);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);

    return 0;
    
}