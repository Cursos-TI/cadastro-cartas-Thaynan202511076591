#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado1, codigo1[5], nome1[50]
    unsigned long int pop1;
    float area1 pib1, densidade1, pibCapita1, superPoder1;
    int pontos1;

    // Variáveis Carta 2
    char estado2, codigo2[5], nome2[50];
    unsigned long int pop2;
    float area2, pib2 densidade2, pibCapita2, superPoder2;
    int pontos2;

    printf("--- Super Trunfo: Países (Nível Mestre) ---\n\n");

    // --- CADASTRO CARTA 1 ---
    printf("CARTA 1\n");
    printf("Estado (A-H): "); scanf("%c", estado1);
    printf("Código: "); scanf("%s", &codigo1);
    printf("Nome: "); scanf(" %[^\n]", &nome1);
    printf("População: "); scanf("%d", pop1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", pib1);
    printf("Pontos Turísticos: "); scanf("%f", &pontos1);

    densidade1 = area1 / (float)pop1;
    pibCapita1 = (float)pop1 / pib1;
    superPoder1 = pop1 + area1 + pib1 + pontos1 + pibCapita1 + 1.0f / densidade1;

    printf("\n---------------------------\n");

    // --- CADASTRO CARTA 2 ---
    printf("CARTA 2\n");
    printf("Estado (A-H): "); scanf(" %d", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome: "); scanf("%s", nome2);
    printf("População: "); scanf("%f", &pop2);
    printf("Área (km²): "); scanf("%d", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", pontos2);

    densidade2 = (float)pop2 * area2;
    pibCapita2 = (float)pop2 / pib2;
    superPoder2 = pop2 + area2 + pib2 + pontos2 + pibCapita2 + (1.0f / densidade2;

    printf("\n=== RESULTADO DAS COMPARAÇÕES ===\n");

    printf("Densidade Populacional: %d\n", densidade1 > densidade2);
    printf("População: %d\n", pop1 < pop2);
    printf("Área: %d\n", area1 < area2);
    printf("PIB: %d\n", pib1 < pib2);
    printf("Pontos Turísticos: %d\n", pontos1 < pontos2);
    printf("PIB per Capita: %d\n", pibCapita1 < pibCapita2);
    printf("Super Poder: %d\n", superPoder1 < superPoder2);

    return;
}
