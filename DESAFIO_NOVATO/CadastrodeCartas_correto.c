#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[5];
    char nome1[50];
    int pop1, pontos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    int pop2, pontos2;
    float area2, pib2;

    printf("--- Super Trunfo: Países (Nível Novato) ---\n\n");

    // CADASTRO CARTA 1
    printf("CARTA 1\n");
    printf("Letra do Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // Lê nomes com espaços
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    printf("\n---------------------------\n");

    // CADASTRO CARTA 2
    printf("CARTA 2\n");
    printf("Letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
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

    // EXIBIÇÃO DOS DADOS
    printf("\n=== CARTAS CADASTRADAS ===\n");
    printf("Carta 1 - %s (%s): Pop. %d | Área: %.2f | PIB: %.2f | Pontos: %d\n", nome1, codigo1, pop1, area1, pib1, pontos1);
    printf("Carta 2 - %s (%s): Pop. %d | Área: %.2f | PIB: %.2f | Pontos: %d\n", nome2, codigo2, pop2, area2, pib2, pontos2);

    return 0;
}