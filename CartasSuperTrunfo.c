#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo - Países. \n");

    printf("\n"); //espaçamentos 

    printf("País - China\n");

    printf("\n");

    printf("carta A1\n"); 

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char Estado [50] ;
    char Codigo[50] ;
    char Nome[50];
    float PIB;
    float area;
    int Populacao;
    int pontos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite um Estado de A até H: \n");
    scanf("%s", &Estado);

    printf("Digite o Código da carta: \n")
    scanf("%s", &Codigo);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &Nome);

    printf("PIB da Cidade: \n");
    scanf("%f", &PIB);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("Tamanho da População: \n");
    scanf("%d", &Populacao); 
    
    printf("Digite o numero de pontos turiticos: \n");
    scanf("%d", &pontos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");

    printf("Estado: %s\n", &Estado);
    printf("Codigo: %s\n", &Codigo);
    printf("Nome: %s\n", &Nome);
    printf("PIB: %f $\n", PIB);
    printf("Area: %f Km2\n", area);
    printf("População: %d\n", Populacao);
    printf("Pontos: %d\n", pontos);

    
}
