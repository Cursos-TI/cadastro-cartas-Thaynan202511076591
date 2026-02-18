#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    printf("--- Super Trunfo: Países (Nível Novato) ---");

    // --- CADASTRO DA CARTA 1 ---
    printf("Cadastre a CARTA 1:");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n---------------------------/n");

    // --- CADASTRO DA CARTA 2 ---
    printf("Cadastre a CARTA 2: ");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: A02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- EXIBIÇÃO DA CARTA 1 ---
    printf("\nCarta 1:\n");
    printf("Estado: %c Código: %s Nome: %s ", estado1, codigo1, nomeCidade1);
    printf("População: %d Área: %.f km² PIB: %.2f Pontos Turísticos: %d ", populacao1, area1, pib1, pontosTuristicos1);

    // --- EXIBIÇÃO DA CARTA 2 ---
    printf("\nCarta 2: ");
    printf("Estado: %c Código: %s Nome: %s ", estado2, codigo2, nomeCidade2);
    printf("População: %d Área: %.2f km² PIB: %.f Pontos Turísticos: %d ", populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}