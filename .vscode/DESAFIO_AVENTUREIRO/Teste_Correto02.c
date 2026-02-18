#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[5], nome1[50];
    int pop1, pontos1;
    float area1, pib1;
    float densidade1, pibPerCapita1; // Propriedades Calculadas

    // Variáveis da Carta 2
    char estado2;
    char codigo2[5], nome2[50];
    int pop2, pontos2;
    float area2, pib2;
    float densidade2, pibPerCapita2; // Propriedades Calculadas

    printf("--- Super Trunfo: Países (Nível Aventureiro) ---\n\n");

    // CADASTRO CARTA 1
    printf("CARTA 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // CÁLCULOS CARTA 1
    densidade1 = (float)pop1 / area1;
    pibPerCapita1 = pib1 / (float)pop1;

    printf("\n---------------------------\n");

    // CADASTRO CARTA 2
    printf("CARTA 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // CÁLCULOS CARTA 2
    densidade2 = (float)pop2 / area2;
    pibPerCapita2 = pib2 / (float)pop2;

    // EXIBIÇÃO FINAL COM DADOS CALCULADOS
    printf("\n=== CARTAS ESTRATÉGICAS ===\n");
    
    printf("\nCARTA 1: %s\n", nome1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCARTA 2: %s\n", nome2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("============================\n");

    return 0;
}