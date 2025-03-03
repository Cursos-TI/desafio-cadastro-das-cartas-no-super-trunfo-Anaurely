#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    printf("***Desafio Super Trunfo***\n");

    // inserindo as variáveis utilizadas nas cartas 1
    char carta1[20];
    char estado1;
    char codigo1[20];
    char cidade1[50];
    unsigned long populacao1;
    int pontos1;
    float area1;
    float pib1;
    float densidade1, pibpercapita1;
    


    // inserindo as variáveis utilizadas nas cartas 2
    char carta2[20];
    char estado2;
    char codigo2[20];
    char cidade2[50];
    unsigned long populacao2;
    int pontos2;
    float area2;
    float pib2;
    float densidade2, pibpercapita2;
    float superpoder1, superpoder2;

    //Solicitação Cadastramento de informacoes ao usuario da carta 1
    printf("\nCarta 1\n");
   
    printf("Estado (carta) (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%s" &populacao1);

    printf("Área do estado em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;//calculo da densidade populacional
    pibpercapita1 = pib1 / populacao1;//calculo do pib per capita
    superpoder1 = populacao1+area1+pib1+pontos1+pibpercapita1+densidade1;//calculo do superpoder



        
    //Solicitação Cadastramento de informacoes ao usuario da carta 2
    printf("\nCarta 2\n");
    
    printf("Estado (carta) (A a H): ");
    scanf(" %c", &estado2);
   
    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%s", &populacao2);

    printf("Área do estado em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;//calculo da densidade populacional
    pibpercapita2 = pib2 / populacao2;//calculo do pib per capita
    superpoder2 = populacao2+area2+pib2+pontos2+pibpercapita2+densidade2;//calculo do superpoder
    
      
    

    //imprimindo titulos das cartas
    printf("\n***Desafio Super Trunfo***\n");

    //imprimindo carta 1
    printf("\nCarta 1\n");
    
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %s\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);


    //imprimindo carta 2
    
    printf("\nCarta 2\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %s\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    //comparação de Cartas
    printf("\n***Comparação de Cartas***\n");

   
   //Comparação de População
   populacao1 > populacao2;   
   printf("População:  %s\n", populacao1 > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu");

   area1 > area2;
   printf("Área:  %s\n", area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu");

    pib1 > pib2;
    printf("PIB:  %s\n", pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu");

    pontos1 > pontos2;
    printf("Pontos Turisticos:  %s\n", pontos1 > pontos2 ? "Carta 1 venceu" : "Carta 2 venceu");
    
    pibpercapita1 > pibpercapita2;
    printf("PIB per capita:  %s\n", pibpercapita1 > pibpercapita2 ? "Carta 1 venceu" : "Carta 2 venceu");

    densidade1 < densidade2;
    printf("Densidade Populacional:  %s\n", densidade1 < densidade2 ? "Carta 1 venceu" : "Carta 2 venceu");

    superpoder1 > superpoder2;
    printf("Super Poder:  %s\n", superpoder1 > superpoder2 ? "Carta 1 venceu" : "Carta 2 venceu");



    






    return 0;

}