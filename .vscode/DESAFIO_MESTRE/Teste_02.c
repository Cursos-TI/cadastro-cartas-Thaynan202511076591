#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado1, codigo1[5], nome1[50];
    unsigned long int pop1; // Usando unsigned long para grandes populações
    float area1, pib1, densidade1, pibCapita1, superPoder1;
    int pontos1;

    // Variáveis Carta 2
    char estado2, codigo2[5], nome2[50];
    unsigned long int pop2;
    float area2, pib2, densidade2, pibCapita2, superPoder2;
    int pontos2;

    printf("--- Super Trunfo: Países (Nível Mestre) ---\n\n");

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
    // O Super Poder é a soma de tudo (usamos 1/densidade para que menor densidade ajude na soma)
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

    // --- COMPARAÇÃO E RESULTADOS ---
    printf("\n=== RESULTADO DAS COMPARAÇÕES (1 = Vence Carta 1 / 0 = Vence Carta 2) ===\n");
    
    // Na densidade, o MENOR vence (usamos o operador < )
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    
    // Nos outros, o MAIOR vence (usamos o operador > )
    printf("População: %d\n", pop1 > pop2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    printf("PIB per Capita: %d\n", pibCapita1 > pibCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}