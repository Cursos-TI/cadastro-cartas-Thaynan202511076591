#include <stdio.h>

int main() {
    // Declaração das variáveis
    // Sugestão: Use char para estado e strings para nome e código
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("--- Cadastro de Cartas: Super Trunfo Países ---\n\n");

    // --- ENTRADA DE DADOS ---
    // Dica: Use %s para ler palavras sem espaços e %c para caracteres únicos
    
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado); // O espaço antes de %c ajuda a ignorar o 'enter' anterior

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // --- SAÍDA DE DADOS ---
    printf("\n---------------------------\n");
    printf("Dados da Carta Cadastrada:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area); // %.2f limita a duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("---------------------------\n");

    return 0;
}