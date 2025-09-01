#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char estado_1, estado_2, cidade_1[50], cidade_2[50], codigo_carta_1[4], codigo_carta_2[4];
    int numero_carta_1, numero_carta_2, populacao_1, pontos_turisticos_1, populacao_2, pontos_turisticos_2;
    float area_1, pib_1, area_2, pib_2;

    // -----------------------------------
    // Início do jogo
    // -----------------------------------
    
    printf("================================\n");
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("================================\n");

    // -----------------------------------
    // Dados da carta 1
    // -----------------------------------
    printf("Insira os dados da Carta 1!\n");

    // Solicita entrada para o estado - Carta 1
    printf("Digite o Estado ('A' a 'H'): ");
    scanf(" %c", &estado_1);

    // Solicita entrada para o número da carta - Carta 1
    printf("Digite o numero da carta (Entre 1 e 4): ");
    scanf("%d", &numero_carta_1);

    // Solicita entrada para o nome da cidade - Carta 1
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_1);
    
    // Solicita entrada para o número de habitantes - Carta 1
    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao_1);

    // Solicita entrada para a área da cidade - Carta 1
    printf("Digite a area da cidade: ");
    scanf("%f", &area_1);
    
    // Solicita entrada para o PIB - Carta 1
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_1);

    // Solicita entrada para o número de pontos turísticos - Carta 1
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);

    // Geração do código da carta 1
    snprintf(codigo_carta_1, sizeof(codigo_carta_1), "%c%02d", estado_1, numero_carta_1);

    // -----------------------------------
    // Dados da carta 2
    // -----------------------------------
    printf("Insira os dados da Carta 2!\n");

    // Solicita entrada para o estado - Carta 2
    printf("Digite o Estado ('A' a 'H'): ");
    scanf(" %c", &estado_2);

    // Solicita entrada para o código - Carta 2
    printf("Digite o numero da carta (Entre 1 e 4): ");
    scanf("%d", &numero_carta_2);

    // Solicita entrada para o nome da cidade - Carta 2
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_2);
    
    // Solicita entrada para o número de habitantes - Carta 2
    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao_2);

    // Solicita entrada para a área da cidade - Carta 2
    printf("Digite a area da cidade: ");
    scanf("%f", &area_2);
    
    // Solicita entrada para o PIB - Carta 2
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_2);

    // Solicita entrada para o número de pontos turísticos - Carta 2
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_2);

    // Geração do código da carta 2
    snprintf(codigo_carta_2, sizeof(codigo_carta_2), "%c%02d", estado_2, numero_carta_2);

    // -----------------------------------
    // Exibição dos dados
    // -----------------------------------
    printf("========================================\n");
    printf("Dados da Carta 1\n");
    printf("========================================\n");
    printf("Carta: 1\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("========================================\n");

    printf("========================================\n");
    printf("Dados da Carta 2\n");
    printf("========================================\n");
    printf("Carta: 2\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("========================================\n");

    return 0;
}