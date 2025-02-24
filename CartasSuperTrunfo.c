#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    printf("Desafio Super Trunfo - Países. \n");

    printf("\n"); //espaçamentos 

    printf("País - China\n");

    printf("\n");

    printf("Carta A1\n"); 

    printf("\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char Estado[30] ;
    char Codigo[30] ;
    char Nome[30];
    float PIB;
    float PIBP;
    float area;
    float densidade, SuperPoder;
    unsigned long int Populacao;
    int pontos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite um Estado de A até H: \n");
    scanf("%s", Estado);

    printf("Digite o Código da carta: \n");
    scanf("%s", Codigo);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", Nome);

    printf("PIB da Cidade: \n");
    scanf("%f", &PIB);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("Tamanho da População: \n");
    scanf("%d", &Populacao); 
    
    printf("Digite o numero de pontos turiticos: \n");
    scanf("%d", &pontos);
   
// adicionando pib per capita e densidade populacional, resultado sera exibido juntamente com os resultado das cartas
// Super Poder
    PIBP = (float)(PIB / Populacao);
    densidade = (float)(Populacao /area);
    SuperPoder = (Populacao + area + PIB + pontos + PIBP +(1 / densidade));
    
    printf("\n");

    printf("---Carta B1---\n");

    char EstadoB1 [50] ;
    char CodigoB1[50] ;
    char NomeB1[50];
    float PIBB1;
    float PIBPB1;
    float areaB1;
    float densidadeB1, SuperPoderB1;
    unsigned long int PopulacaoB1;
    int pontosB1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite um Estado de A até H: \n");
    scanf("%s", EstadoB1);

    printf("Digite o Código da carta: \n");
    scanf("%s", CodigoB1);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", NomeB1);

    printf("PIB da Cidade: \n");
    scanf("%f", &PIBB1);

    printf("Área da cidade: \n");
    scanf("%f", &areaB1);

    printf("Tamanho da População: \n");
    scanf("%d", &PopulacaoB1); 
    
    printf("Digite o numero de pontos turiticos: \n");
    scanf("%d", &pontosB1);

    PIBPB1 = (float)(PIBB1 / PopulacaoB1);
    densidadeB1 = (float)(PopulacaoB1 / areaB1);
    SuperPoderB1 = (PopulacaoB1 + areaB1 + PIBB1 + pontosB1 + PIBPB1 +(1 / densidadeB1));
    // Exibição dos Dados de ambas as Cartas:
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha.
    //superpoder adicionado

    
    
    printf("\n");
    
    printf("--Carta A1--");
    
    Printf("\n");

    printf("Estado: %s\n", &Estado);
    printf("Codigo: %s\n", &Codigo);
    printf("Nome: %s\n", &Nome);
    printf("PIB: %2.f $\n", PIB);
    printf("Area: %2.f Km²\n", area);
    printf("Densidade populacional: %f  Hab/KM² \n", densidade);
    printf("População: %d\n", Populacao);
    printf("PIB per capita: %.f $Reais$\n", PIBP);
    printf("Pontos: %d\n", pontos);
    
    printf("\n");
    
    printf("--Carta B1--");
    
    Printf("\n");
         
    printf("Estado: %s\n", &EstadoB1);
    printf("Codigo: %s\n", &CodigoB1);
    printf("Nome: %s\n", &NomeB1);
    printf("PIB: %f $\n", PIBB1);
    printf("Area: %f Km²\n", areaB1);
    printf("Densidade populacional: %f  Hab/KM² \n", densidadeB1);
    printf("População: %d\n", PopulacaoB1);
    printf("PIB per capita: %.f $Reais$\n", PIBPB1);
    printf("Pontos: %d\n", pontosB1);

    printf("\n");

    // RESULTADOS DAS CARTAS, COM A NOVA FUNÇÃO DE DENSIDADE E PIB PER CAPITA****
    //as comparações logo abaixo

    printf(" Comparacao de Cartas \n\n");
  
    printf("Populacao: %d\n", Populacao > PopulacaoB1 );
    printf("Area da Cidade: %d\n", area > areaB1);
    printf("Densidade populacional: %d\n", densidade < densidadeB1);
    printf("PIB da Cidade: %d\n", PIB > PIBB1);
    printf("PIB per capita: %d\n", PIBP > PIBPB1);
    printf("Pontos Turiticos: %d\n", pontos > pontosB1);
    printf("SuperPoder: %d\n", SuperPoder > SuperPoderB1);

    //1 o resultado é carta1, 0 o resultado é carta2***

    return 0;    
}
