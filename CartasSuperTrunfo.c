#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo [10];
    char nome_da_cidade [20];
    int populaçao;
    float area;
    float PIB;
    int numero_de_pontos_turisticos;
    char estado [20];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população;
    
    printf("digite o codigo: \n");
    scanf("%s", codigo);

    printf("digite o nome: \n");
    scanf("%s", nome_da_cidade);

    printf("digite a populacao: \n");
    scanf("%d", populaçao);

    printf("digite a area: \n");
    scanf("%f", area);

    printf("digite o PIB: \n");
    scanf("%f", PIB);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", numero_de_pontos_turisticos);

    printf("digite o estado: \n");
    scanf("%s", estado);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    


    return 0;
}
