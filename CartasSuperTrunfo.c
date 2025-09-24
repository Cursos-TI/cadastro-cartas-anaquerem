#include <stdio.h>

int main() {
    printf("Desafio Cartas Super Trunfo Novato\n");
   
    // Variáveis da carta 1
    
    char estado1;
    char codigo1[6];
    char nomedacidade1[50];
    int populacao1;
    int pontosturisticos1;
    float area1;
    float PIB1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[6];
    char nomedacidade2[50];
    int populacao2;
    int pontosturisticos2;
    float area2;
    float PIB2;

    //Inserindo os dados da carta 1

    printf("Carta 1\n"); 

    printf("Digite o estado (A-H) \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade \n");
    scanf("%s", nomedacidade1);

    printf("Digite o numero da populacao \n");
    scanf("%d", &populacao1);

    printf("Digite o numero de pontos turisticos \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a area da cidade \n");
    scanf("%f", &area1);

    printf("Digite o PIB \n");
    scanf("%f", &PIB1);

    //Inserindo os dados da carta 2

    printf("Carta 2\n");

    printf("Digite o estado (A-H) \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade \n");
    scanf("%s", nomedacidade2);

    printf("Digite o numero da populacao \n");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a area da cidade \n");
    scanf("%f", &area2);

    printf("Digite o PIB \n");
    scanf("%f", &PIB2);


    // Exibindo os dados da carta 1

    printf("estado: %c \n", estado1);
    printf("codigo da carta: %s \n", codigo1);
    printf("nome da cidade: %s \n", nomedacidade1);
    printf("numero da populacao %d \n", populacao1);
    printf("numero de pontos turisticos: %d \n", pontosturisticos1);
    printf("area da cidade em km²: %f \n", area1);
    printf("PIB: %f \n", PIB1);

    // Exibindo os dados da carta 2

    printf("estado: %c \n", estado2);
    printf("codigo da carta: %s \n", codigo2);
    printf("nome da cidade: %s \n", nomedacidade2);
    printf("numero da populacao %d \n", populacao2);
    printf("numero de pontos turisticos: %d \n", pontosturisticos2);
    printf("area da cidade em km²: %f \n", area2);
    printf("PIB: %f \n", PIB2);

    return 0;
}
