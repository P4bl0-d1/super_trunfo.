#include <stdio.h>

int main(){
    char estado,Cidade[8], codigo_da_carta[6]; // linhas usadas para inserir variáveis que vão determinar a base para inserir os dados e criar as cartas do jogo supertrunfo 
    int populacao, pontos_turisticos; 
    float area, pib; 

// entrada de dados primeira carta
    printf("digite o estado: \n");
    scanf("%s", &estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("digite o nome da cidade \n");
    scanf("%s", &Cidade);

    printf("digite o numero da população \n");
    scanf("%d", &populacao);

    printf("digite a area \n");
    scanf("%f", &area);

    printf("digite o pib \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    // exibição de dados primeira carta
    printf("\n--primeira carta--\n");
    printf("Estado: %s \n", &estado);
    printf("Cidade: %s \n",Cidade);
    printf("Codigo da carta: %s \n", codigo_da_carta);
    printf("Populacao: %d \n", populacao);
    printf("Area: %f kilometros quadrados\n", area);
    printf("Pib: %f bilhões de reais \n", pib);
    printf("Pontos Turisticos: %d \n", pontos_turisticos);

    // carta 2 
    char estado2,cidade2[8], codigo_da_carta2[6];
    int populacao2, pontos_turisticos2; 
    float area2, pib2;

    // entrada de dados carta 2
    printf("digite o estado: \n");
    scanf("%s", &estado2);

    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta2);

    printf("digite o nome da cidade \n");
    scanf("%s",  &cidade2);

    printf("digite o numero da população \n");
    scanf("%d", &populacao2);

    printf("digite a area \n");
    scanf("%f", &area2);

    printf("digite o pib \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // exibição de dados carta 2
    printf("--segunda carta--\n");
    printf("Estado: %s \n", &estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Codigo da carta: %s \n", codigo_da_carta2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %f kilometros quadrados\n", area2);
    printf("Pib: %f bilhões de reais \n", pib2);
    printf("Pontos turisticos: %d \n", pontos_turisticos2);

    return 0;
}
