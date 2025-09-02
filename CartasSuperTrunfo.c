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

    char codigo1[10];
    char nome_da_cidade1[20];
    unsigned long int populaçao1;
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;
    char estado1[20];
    float densidade_populacional1;
    float PIB_per_capita1;

    // Variaveis para a carta 2.

    char codigo2[10];
    char nome_da_cidade2[20];
    unsigned long int populaçao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    char estado2[20];
    float densidade_populacional2;
    float PIB_per_capita2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população;
    
    // Cadartro da carta 1: 

    printf("digite o codigo: \n");
    scanf("%s", codigo1);

    printf("digite o nome da cidade: \n");
    scanf(" %19[^\n]", nome_da_cidade1);

    printf("digite a populaçao: \n");
    scanf("%lu", &populaçao1);

    printf("digite a area: \n");
    scanf("%f", &area1);

    printf("digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("digite o estado: \n");
    scanf(" %19[^\n]", estado1);

    // Calcula atributos derivados para carta 1
    
    densidade_populacional1 = populaçao1 / area1;
    PIB_per_capita1 = PIB1 * 1e6 / populaçao1;

    // Cadastro da carta 2:

    printf("digite o codigo: \n");
    scanf("%s", codigo2);

    printf("digite o nome da cidade: \n");
    scanf(" %19[^\n]", nome_da_cidade2);

    printf("digite a populaçao: \n");
    scanf("%lu", &populaçao2);

    printf("digite a area: \n");
    scanf("%f", &area2);

    printf("digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d",&numero_de_pontos_turisticos2);

    printf("digite o estado: \n");
    scanf(" %19[^\n]", estado2);

    // Calcula atributos derivados para carta 2
    
    densidade_populacional2 = populaçao2 / area2;
    PIB_per_capita2 = PIB2 * 1e6 / populaçao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n--- Carta 1 ---\n");
    
    printf("codigo: %s\n", codigo1);
    printf("nome da cidade: %s\n", nome_da_cidade1);
    printf("populaçao: %lu\n", populaçao1);
    printf("area: %.1f\n", area1);
    printf("PIB: %.1f\n", PIB1);
    printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos1);
    printf("estado: %s\n", estado1);
    printf("densidade populacional: %.1f\n", densidade_populacional1);
    printf("PIB per capita: %.1f\n", PIB_per_capita1);

    printf("\n--- Carta 2 ---\n");
    
    printf("codigo: %s\n", codigo2);
    printf("nome da cidade: %s\n", nome_da_cidade2);
    printf("populaçao: %lu\n", populaçao2);
    printf("area: %.1f\n", area2);
    printf("PIB: %.1f\n", PIB2);
    printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos2);
    printf("estado: %s\n", estado2);
    printf("densidade populacional: %.1f\n", densidade_populacional2);
    printf("PIB per capita: %.1f\n", PIB_per_capita2);

    // Comparação de Cartas:
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    
    // Comparação de População
    printf("População: Carta %d vence\n", populaçao1 > populaçao2 ? 1 : 2);
    
    // Comparação de Área
    printf("Área: Carta %d vence\n", area1 > area2 ? 1 : 2);
    
    // Comparação de PIB
    printf("PIB: Carta %d vence\n", PIB1 > PIB2 ? 1 : 2);
    
    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta %d vence\n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? 1 : 2);
    
    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d vence\n", densidade_populacional1 < densidade_populacional2 ? 1 : 2);
    
    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta %d vence\n", PIB_per_capita1 > PIB_per_capita2 ? 1 : 2);
    
    // Cálculo do Super Poder
    float super_poder1 = populaçao1 + area1 + PIB1 + numero_de_pontos_turisticos1 + 
                         PIB_per_capita1 + (1/densidade_populacional1);
    
    float super_poder2 = populaçao2 + area2 + PIB2 + numero_de_pontos_turisticos2 + 
                         PIB_per_capita2 + (1/densidade_populacional2);
    
    // Comparação do Super Poder
    printf("Super Poder: Carta %d vence (%.2f vs %.2f)\n", 
           super_poder1 > super_poder2 ? 1 : 2, super_poder1, super_poder2);

    return 0;
}