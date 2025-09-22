#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome1[100], nome2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Leitura dos dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Leitura dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Super Poder: soma dos atributos numéricos + inverso da densidade
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pib_per_capita1 + (1.0f / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pib_per_capita2 + (1.0f / densidade2);

    // Comparações
    int v_populacao = populacao1 > populacao2;
    int v_area = area1 > area2;
    int v_pib = pib1 > pib2;
    int v_pontos = pontos1 > pontos2;
    int v_densidade = densidade1 < densidade2; // menor vence
    int v_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    int v_super_poder = super_poder1 > super_poder2;

    // Exibição dos resultados das comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", v_populacao);
    printf("Área: Carta 1 venceu (%d)\n", v_area);
    printf("PIB: Carta 1 venceu (%d)\n", v_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", v_pontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", v_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", v_pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", v_super_poder);

    return 0;
}