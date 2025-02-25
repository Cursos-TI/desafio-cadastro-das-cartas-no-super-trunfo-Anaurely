#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

struct Carta {
    char Codigo[4];
    char Estado;
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Turisticos;
};

int main() {
    struct Carta carta1;

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", &carta1.Codigo);

    printf("Digite a 1ª letra estado (ex: X): ");
    scanf(" %c", &carta1.Estado);

    printf("Digite a cidade: (ex: CampoGrande) ");
    scanf("%s", &carta1.Cidade);

    printf("Digite a população(ex: 1(milhões)): ");
    scanf("%d", &carta1.Populacao);

    printf("Digite a área (ex: 1 km²): ");
    scanf("%f", &carta1.Area);

    printf("Digite o PIB (ex: 1 bilhões): ");
    scanf("%f", &carta1.PIB);

    printf("Digite o número de pontos turísticos(ex: 6): ");
    scanf("%d", &carta1.Turisticos);

    printf("Carta 1 \n");
    printf("Código da Carta: %s\n", carta1.Codigo);
    printf("Inicial do Estado: %c\n", carta1.Estado);
    printf("Nome da Cidade: %s\n", carta1.Cidade);
    printf("População: %d mil habitantes\n", carta1.Populacao);
    printf("Área: %.2f km²\n", carta1.Area);
    printf("PIB: %f bilhões de reais\n", carta1.PIB);
    printf("Número de pontos turísticos: %d\n", carta1.Turisticos);

    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

