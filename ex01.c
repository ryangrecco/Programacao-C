#include <stdio.h>

int main(){
    char estado1[2], cidade1[50];
    char estado2[2], cidade2[50];
    int codigo1, populacao1, turisticos1;
    int codigo2, populacao2, turisticos2;
    float area1, pib1;
    float area2, pib2;

    printf("Carta 1\n");
    printf("Digite a letra do estado:\n");
    scanf("%s", estado1);
    printf("Digite o código do estado:\n");
    scanf("%d", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade\n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turísticos:\n");
    scanf("%d", &turisticos1);

    
    printf("Carta 2\n");
    printf("Digite a letra do estado:\n");
    scanf("%s", &estado2);
    printf("Digite o código do estado:\n");
    scanf("%d", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite a população da cidade\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turísticos:\n");
    scanf("%d", &turisticos2);

    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código:%s%d\n", estado1, codigo1);
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%f \n", area1);
    printf("PIB:%f\n", pib1);
    printf("Número de Pontos Turísticos:%d\n", turisticos1);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código:%s%d\n", estado2, codigo2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%f \n", area2);
    printf("PIB:%f\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", turisticos2);

    return 0;
}