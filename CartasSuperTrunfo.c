#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    printf("***Desafio Super Trunfo***\n");

    // inserindo as variáveis utilizadas nas cartas 1
    char estado1;
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    int pontos1;
    float area1;
    float pib1;


    // inserindo as variáveis utilizadas nas cartas 2
    char estado2;
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    int pontos2;
    float area2;
    float pib2;


    //Solicitação Cadastramento de informacoes ao usuario da carta 1
    printf("\nCarta 1\n");
   
    printf("Estado da carta (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área do estado em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    
    //Solicitação Cadastramento de informacoes ao usuario da carta 2
    printf("\nCarta 2\n");
    
    printf("Estado da carta (A a H): ");
    scanf(" %c", &estado2);
   
    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área do estado em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);



    printf("\n***Desafio Super Trunfo***\n");

    //imprimindo carta 1
    printf("\nCarta 1\n");
    printf("Estado da carta: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);


    //imprimindo carta 2
    printf("\nCarta 2\n");
    printf("Estado da carta: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);








    return 0;

}