#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    printf("***Desafio Super Trunfo***\n");

    // inserindo as variáveis utilizadas nas cartas 1
    char carta1[20];
    char pais1[50];
    int populacao1;
    int pontos1;
    float area1;
    float pib1;
    float densidade1, pibpercapita1;
    


    // inserindo as variáveis utilizadas nas cartas 2
    char carta2[20];
    char pais2[50];
    int populacao2;
    int pontos2;
    float area2;
    float pib2;
    float densidade2, pibpercapita2;
    

    //Solicitação Cadastramento de informacoes ao usuario da carta 1
    printf("\nCarta 1\n");
   
    printf("País (carta): ");
    scanf(" %s", &pais1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área do estado em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;//calculo da densidade populacional
    pibpercapita1 = pib1 / populacao1;//calculo do pib per capita
    



        
    //Solicitação Cadastramento de informacoes ao usuario da carta 2
    printf("\nCarta 2\n");
    
    printf("País (carta): ");
    scanf(" %s", &pais2);
   
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área do estado em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;//calculo da densidade populacional
    pibpercapita2 = pib2 / populacao2;//calculo do pib per capita
      
    int escolha;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

   

    
    //imprimindo titulos das cartas
    printf("\n***Desafio Super Trunfo***\n");

    //imprimindo carta 1
    printf("\nCarta 1\n");
    
    printf("País: %s\n", pais1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);


    

    //imprimindo carta 2
    
    printf("\nCarta 2\n");

    printf("País: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    printf("\n Comparando %s vs %s\n", pais1,pais2);

    switch (escolha)
    {
    case 1:
        printf("População: %d vs %d \n"), populacao1,populacao2;
        if(populacao1 > populacao2)
        printf("%s venceu!\n",pais1);
        else if (populacao1 < populacao2)
        printf("%s venceu!\n",pais2);
        else
        printf("Empate!\n");      
        break;
    case 2:
    printf("Area: %.2f vs %.2f\n"), area1,area2;
    if(area1 > area2)
    printf("%s venceu!\n",pais1);
    else if (area1 < area2)
    printf("%s venceu!\n",pais2);
    else
    printf("Empate!\n");      
    break;
    case 3:
    printf("PIB: %.2f vs %.2f\n"), pib1,pib2;
    if(pib1 > pib2)
    printf("%s venceu!\n",pais1);
    else if (pib1 < pib2)
    printf("%s venceu!\n",pais2);
    else
    printf("Empate!\n");      
    break;
    case 4:
    printf("Pontos Turísticos: %d vs %d\n"), pontos1,pontos2;
    if(pontos1 > pontos2)
    printf("%s venceu!\n",pais1);
    else if (pontos1 < pontos2)
    printf("%s venceu!\n",pais2);
    else
    printf("Empate!\n");      
    break;
    case 5:
    printf("Densidade Populacional: %f vs %f\n"), densidade1,densidade2;
    if(densidade1 > densidade2)
    printf("%s venceu!\n",pais1);
    else if (densidade1 < densidade2)
    printf("%s venceu!\n",pais2);
    else
    printf("Empate!\n");      
    break;
    
    default:
    printf("Opção Inválida\n");
        break;
    }
       


return 0;
}   