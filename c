#include <stdio.h>

int main(){
    char estado, cidade[8], codigo_da_carta[6]; //linha usada para registrar o estado, codigo da carta e nome da cidade.
    int populacao, pontos_turisticos; //usada para registrar o número da população e de pontos turisticos
    float area, pib; 

// usado para inserir os dados
    printf("digite o estado: \n");
    scanf("%s", &estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("digite o nome da cidade \n");
    scanf("%s",  &cidade);

    printf("digite o numero da população \n");
    scanf("%d", &populacao);

    printf("digite a area \n");
    scanf("%f", &area);

    printf("digite o pib \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    // apartir daqui serão usados comandos para aparecer os dados inseridos
    
    printf("estado: %s \n", estado);
    printf("cidade: %s \n", cidade);
    printf("codigo da carta: %s \n", codigo_da_carta);
    printf("populacao: %d \n", populacao);
    printf("area: %f kilometros quadrados\n", area);
    printf("pib: %f bilhões de reais \n", pib);
    printf("pontos turisticos: %d \n", pontos_turisticos);

    return 0;
}
