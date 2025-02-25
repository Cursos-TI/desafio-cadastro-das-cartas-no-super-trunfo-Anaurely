#include <stdio.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

    int main (){

        // inserindo as variáveis utilizadas nas cartas 1 e 2

        
        char codigo1[4];
        char codigo2[4];
        int populacao1;
        int populacao2;
        int turismo1;
        int turismo2;
        float area1;
        float area2;
        float pib1;
        float pib2;
        

        //Solicitação Cadastramento de informacoes ao usuario da carta 1


        printf("Digite o código da carta (ex: R01): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%s", &codigo1);// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
               
        printf("Digite a população (ex: 100000 (Cem mil): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%d", &populacao1); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
        printf("Digite a área (ex: 1 km²): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%f", &area1); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
        printf("Digite o PIB (ex: (1) bilhões): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%f", &pib1); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
        printf("Digite o número de pontos turísticos (ex: 6): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%d", &turismo1); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.


        
        //Solicitação Cadastramento de informacoes ao usuario da carta 2

        printf("Digite o código da carta (ex: R01): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%s", &codigo2);// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
        
        printf("Digite a população (ex: 100000 (Cem mil): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%d", &populacao2); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
        printf("Digite a área (ex: 1 km²): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%f", &area2); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
        printf("Digite o PIB (ex: (1) bilhões): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%f", &pib2); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
        printf("Digite o número de pontos turísticos (ex: 6): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
        scanf("%d", &turismo2); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.



        //imprimindo carta 1 e carta 2

        printf("Cadastro de Cartas - Super Trunfo: Países\n");

        printf("\nCarta 1\n");

        printf("Dados da Carta %s:\n", codigo1);        
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", turismo1);

        printf("\nCarta 2\n"); 
        printf("Dados da Carta %s:\n", codigo2);        
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", turismo2);

        

        return 0; 

    }