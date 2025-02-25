#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


typedef struct {
    char codigo[4]; // Código da carta (ex: A01)
    char estado;    // 1ª letra do estado (ex: Y)
    char Cidade[50]; // Nome da cidade (Junto)
    int populacao;  // População da cidade
    float area;     // Área da cidade
    float pib;      // PIB da cidade
    int Turismo; // Número de pontos turísticos
} Carta;

void cadastrarCarta(Carta *carta) {
    printf("Digite o código da carta (ex: R01): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, cidade, população, área, etc.
    scanf("%s", carta->codigo); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.

    printf("Digite a 1ª letra do estado (ex: Y): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
    scanf("%s", &carta->estado); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.

    printf("Digite o nome da cidade (ex: CampoGrande): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
    scanf("%s", carta->Cidade); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
    printf("Digite a população (ex: 100000 (Cem mil): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
    scanf("%d", &carta->populacao); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
    printf("Digite a área (ex: 1 km²): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
    scanf("%f", &carta->area); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
    printf("Digite o PIB (ex: (1) bilhões): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
    scanf("%f", &carta->pib); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    
    printf("Digite o número de pontos turísticos (ex: 6): ");// Solicite ao usuário que insira as informações de cada cidade, como o código,estado, nome, população, área, etc.
    scanf("%d", &carta->Turismo); // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.

    
}

void exibirCarta(Carta carta) {

    printf("\nDados da Carta %s:\n", carta.codigo);
    printf("Estado: %c\n", carta.estado);
    printf("Cidade: %s\n", carta.Cidade);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de pontos turísticos: %d\n", carta.Turismo);
}

int main() {
    Carta cartas[2]; // Arranjo para armazenar duas cartas
    printf("Cadastro de Cartas - Super Trunfo: Países\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCadastro da Carta %d:\n", i + 1);    // Cadastra duas cartas
        cadastrarCarta(&cartas[i]);
    }

    // Exibe os dados das cartas cadastradas
    printf("\nDados Cadastrados:\n");// Exibição dos Dados das Cartas
    for (int i = 0; i < 2; i++) {
        exibirCarta(cartas[i]);
    }
 
  
   

    return 0;
}

