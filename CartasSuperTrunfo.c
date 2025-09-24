#include <stdio.h>

int main() {
    printf("Desafio Cartas Super Trunfo Novato\n");
    printf("Carta 1 \n");
   
    // Informações da carta

    char estado; // Inicial do estado (Ex: A)
    char codigo [10]; // Código da carta (Ex: A01)
    char nomedacidade [20]; // Nome da cidade (Ex: São Paulo)
    int populacao; // Número da população (Ex: 12325000)
    int pontosturisticos; // Números de pontos turísticos (Ex: 50)
    float area; // Área da cidade (Ex:1521.11 km²)
    float PIB; // Produto Interno bruto da cidade (Ex: 699.28 bilhões de reais)

    printf("Digite a inicial do estado \n");
    scanf("%c", &estado);

    printf("Digite o codigo da carta \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade \n");
    scanf("%s", nomedacidade);

    printf("Digite o numero da populacao \n");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turisticos \n");
    scanf("%d", &pontosturisticos);

    printf("Digite a area da cidade \n");
    scanf("%f", &area);

    printf("Digite o PIB \n");
    scanf("%f", &PIB);

    printf("inicial: %d \n", estado);
    printf("codigo da carta: %s \n", codigo);
    printf("nome da cidade: %s \n", nomedacidade);
    printf("numero da populacao %d \n", populacao);
    

    return 0;
}
