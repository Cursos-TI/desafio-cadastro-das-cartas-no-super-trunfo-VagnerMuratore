#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Vagner

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1[50], estado2[50];
    char codigocarta1[3] = "A01";
    char codigocarta2[3] = "A02";
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Bem vindo ao jogo Super Trunfo Paises\n\n");
    
    // digita informações da primeira carta
    printf("Digite o nome do primeiro estado:\n");
    scanf("%s", &estado1);
    printf("Digite uma cidade do %s\n",estado1);
    scanf("%s", &cidade1);
    printf("Informe a população de %s\n",cidade1);
    scanf("%f", &populacao1);
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
    scanf("%f", &populacao2);
    printf("Informe a area de %s\n",cidade2);
    scanf("%f", &area2);
    printf("Informe o PIB de %s\n",cidade2);
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turisticos de %s\n",cidade2);
    scanf("%d", &pontosturisticos2);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

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
    

    return 0;
}
