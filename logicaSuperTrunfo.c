#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char codigo1[4], nomeCidade1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Declaração de variáveis para a segunda carta
    char codigo2[4], nomeCidade2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Entrada de dados da primeira carta
    printf("Digite o código da primeira cidade (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada de dados da segunda carta
    printf("\nDigite o código da segunda cidade (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Saída dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    // Saída dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // Escolher critério de comparação
    int opcao;
    printf("\nEscolha o critério para comparar as cidades:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);

    // Comparação das Cartas
    printf("\nResultado da comparação:\n");
    switch(opcao) {
        case 1:
            if (populacao1 > populacao2)
                printf("Cidade vencedora: %s (maior população)\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Cidade vencedora: %s (maior população)\n", nomeCidade2);
            else
                printf("Empate na população!\n");
            break;
        case 2:
            if (area1 > area2)
                printf("Cidade vencedora: %s (maior área)\n", nomeCidade1);
            else if (area2 > area1)
                printf("Cidade vencedora: %s (maior área)\n", nomeCidade2);
            else
                printf("Empate na área!\n");
            break;
        case 3:
            if (pib1 > pib2)
                printf("Cidade vencedora: %s (maior PIB)\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Cidade vencedora: %s (maior PIB)\n", nomeCidade2);
            else
                printf("Empate no PIB!\n");
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Cidade vencedora: %s (mais pontos turísticos)\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Cidade vencedora: %s (mais pontos turísticos)\n", nomeCidade2);
            else
                printf("Empate nos pontos turísticos!\n");
            break;
        case 5:
            if (densidade1 < densidade2)
                printf("Cidade vencedora: %s (menor densidade populacional)\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Cidade vencedora: %s (menor densidade populacional)\n", nomeCidade2);
            else
                printf("Empate na densidade populacional!\n");
            break;
        case 6:
            if (pibPerCapita1 > pibPerCapita2)
                printf("Cidade vencedora: %s (maior PIB per capita)\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Cidade vencedora: %s (maior PIB per capita)\n", nomeCidade2);
            else
                printf("Empate no PIB per capita!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
