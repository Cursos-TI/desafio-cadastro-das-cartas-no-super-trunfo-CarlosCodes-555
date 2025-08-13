#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Variaveis para a carta 1.

    char codigo1 [10];
    char nome_da_cidade1 [20];
    int populaçao1;
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;
    char estado1 [20];

    // Variaveis para a carta 2.

    char codigo2 [10];
    char nome_da_cidade2 [20];
    int populaçao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    char estado2 [20];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população;
    
    // Cadartro da carta 1: 

    printf("digite o codigo1: \n");
    scanf("%s", codigo1);

    printf("digite o nome1: \n");
    scanf("%s", nome_da_cidade1);

    printf("digite a populaçao1: \n");
    scanf("%d", &populaçao1);

    printf("digite a area1: \n");
    scanf("%f", area1);

    printf("digite o PIB1: \n");
    scanf("%f", PIB1);

    printf("digite o numero de pontos turisticos1: \n");
    scanf("%d", numero_de_pontos_turisticos1);

    printf("digite o estado1: \n");
    scanf("%s", estado1);

// Cadastro da carta 2:

    printf("digite o codigo2: \n");
    scanf("%s", codigo2);

    printf("digite o nome2: \n");
    scanf("%s", nome_da_cidade2);

    printf("digite a populacao2: \n");
    scanf("%d", &populaçao2);

    printf("digite a area2: \n");
    scanf("%f", area2);

    printf("digite o PIB: \n");
    scanf("%f", PIB2);

    printf("digite o numero de pontos turisticos2: \n");
    scanf("%d", numero_de_pontos_turisticos2);

    printf("digite o estado2: \n");
    scanf("%s", estado2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("carta1");

    
    


    return 0;
}
