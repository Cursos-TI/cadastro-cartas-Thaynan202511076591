#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado1, codigo1[5], nome1[50];
    unsigned long int pop1;
    float area1, pib1, densidade1, pibCapita1, superPoder1;
    int pontos1;

    // Variáveis Carta 2
    char estado2, codigo2[5], nome2[50];
    unsigned long int pop2;
    float area2, pib2, densidade2, pibCapita2, superPoder2;
    int pontos2;

    printf("--- Super Trunfo: Países (Nível Mestre Final) ---\n\n");

    // --- CADASTRO CARTA 1 ---
    printf("CARTA 1\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome: "); scanf(" %[^\n]", nome1);
    printf("População: "); scanf("%lu", &pop1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontos1);

    densidade1 = (float)pop1 / area1;
    pibCapita1 = pib1 / (float)pop1;
    superPoder1 = (float)pop1 + area1 + pib1 + (float)pontos1 + pibCapita1 + (1.0f / densidade1);

    printf("\n---------------------------\n");

    // --- CADASTRO CARTA 2 ---
    printf("CARTA 2\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome: "); scanf(" %[^\n]", nome2);
    printf("População: "); scanf("%lu", &pop2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontos2);

    densidade2 = (float)pop2 / area2;
    pibCapita2 = pib2 / (float)pop2;
    superPoder2 = (float)pop2 + area2 + pib2 + (float)pontos2 + pibCapita2 + (1.0f / densidade2);

    // --- COMPARAÇÃO E RESULTADOS COM IF/ELSE ---
    printf("\n========= RESULTADO DO CONFRONTO =========\n");

    // Comparação de População (Maior vence)
    printf("População: ");
    if (pop1 > pop2) {
        printf("Vencedora: %s\n", nome1);
    } else if (pop2 > pop1) {
        printf("Vencedora: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    // Comparação de Densidade Populacional (MENOR vence)
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("Vencedora: %s (Menor densidade)\n", nome1);
    } else if (densidade2 < densidade1) {
        printf("Vencedora: %s (Menor densidade)\n", nome2);
    } else {
        printf("Empate!\n");
    }

    // Comparação de PIB per Capita (Maior vence)
    printf("PIB per Capita: ");
    if (pibCapita1 > pibCapita2) {
        printf("Vencedora: %s\n", nome1);
    } else if (pibCapita2 > pibCapita1) {
        printf("Vencedora: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    // Comparação de Super Poder (Maior vence)
    printf("Super Poder Total: ");
    if (superPoder1 > superPoder2) {
        printf("VENCEDOR GERAL: %s!\n", nome1);
    } else if (superPoder2 > superPoder1) {
        printf("VENCEDOR GERAL: %s!\n", nome2);
    } else {
        printf("EMPATE TÉCNICO!\n");
    }

    printf("==========================================\n");

    return 0;
}