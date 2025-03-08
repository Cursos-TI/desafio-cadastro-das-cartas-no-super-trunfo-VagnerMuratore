#include <stdio.h>

int main (){
    
    char estado1[50], estado2[50];
    char codigocarta1[3] = "A01";
    char codigocarta2[3] = "A02";
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    printf("Bem vindo ao jogo Super Trunfo Paises\n\n");
    
    // digita informações da primeira carta
    printf("Digite o nome do primeiro estado:\n");
    scanf("%s", &estado1);
    printf("Digite uma cidade do %s\n",estado1);
    scanf("%s", &cidade1);
    printf("Informe a população de %s\n",cidade1);
    scanf("%d", &populacao1);
    printf("Informe a area de %s\n",cidade1);
    scanf("%f", &area1);
    printf("Informe o PIB de %s\n",cidade1);
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turisticos de %s\n",cidade1);
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // digita informações da segunda carta
    printf("Digite o nome do segundo estado:\n");
    scanf("%s", &estado2);
    printf("Digite uma cidade do %s\n",estado2);
    scanf("%s", &cidade2);
    printf("Informe a população de %s\n",cidade2);
    scanf("%d", &populacao2);
    printf("Informe a area de %s\n",cidade2);
    scanf("%f", &area2);
    printf("Informe o PIB de %s\n",cidade2);
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turisticos de %s\n",cidade2);
    scanf("%d", &pontosturisticos2);

    printf("Veja os dados das cartas\n\n","");
    
    printf("Código da carta: %s\n", codigocarta1);
    printf("Estado: %s\n",estado1);
    printf("Cidade: %s\n",cidade1);
    printf("População: %d\n",populacao1);
    printf("Area: %f\n",area1);
    printf("PIB: %2f\n",pib1);
    printf("Pontos turísticos: %d\n",pontosturisticos1);
   
    printf("\n");

    printf("Código da carta: %s\n", codigocarta2);
    printf("Estado: %s\n",estado2);
    printf("Cidade: %s\n",cidade2);
    printf("População: %d\n",populacao2);
    printf("Area: %f\n",area2);
    printf("PIB: %2f\n",pib2);
    printf("Pontos turísticos: %d\n",pontosturisticos2);

    printf("\n");

    if ((pib1 / populacao1) == (pib2 / populacao2)){
        printf("Carta 1 e 2 empataram, pois tem renda percapta igual \n");
    } 
    else{
        if ((pib1 / populacao1) > (pib2 / populacao2)){
            printf("Carta 1 venceu, pois tem renda percapta maior \n");
        }
        else{
            printf("Carta 2 venceu, pois tem renda percapta maior \n");
        }
    }

    return 0;


}