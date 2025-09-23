#include <stdio.h>

int main() {
    printf("Desafio Cartas Super Trunfo Novato\n");
    printf("Carta 1 \n");
   
    char estado;
    char codigodacarta [50];
    char nomedacidade [50];
    int populacao, numerodepontosturisticos;
    float areaemkm2, PIB;

    printf("Digite o nome do estado: \n");
    scanf(" %s", &estado);

    printf("Digite o codigodacarta: \n");
    scanf("%s", codigodacarta);

    printf("Digite o nome da cidade: \n");

    printf("nome do estado: %c \n", estado);
    printf("codigo da carta: %s", codigodacarta); 
    return 0;
}
