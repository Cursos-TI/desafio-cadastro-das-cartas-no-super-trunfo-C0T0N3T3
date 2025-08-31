#include <stdio.h>

/*estabeleço as varias que serão utilizadas no codigo*/
    char estado1[3], estado2[3];
    char codigo1[50], codigo2[50];
    char nomedacidade1[50], nomedacidade2[50];
    long long int populacao1, populacao2;
    float tamanho1, tamanho2;
    float pib1, pib2;
    int turismo1, turismo2;

int main() {
    printf("Desafio Super Trunfu!");
    /*coleto todas as informações necessarias, lembrando-me 
    de me antentar a utilização do % de maneira correta*/
    printf("Digite a Sigla que represente seu Estado:\n");
    scanf(" %s", &estado1);

    printf("Digite o Código da sua Carta:\n");
    scanf(" %s", &codigo1);

    /*vale resaltar a aprendizagem do novo %, utilizado para a sintaxe de strings com espaço*/
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", &nomedacidade1);

    printf("Digite a População da sua Cidade:\n");
    scanf(" %lld", &populacao1);

    printf("Digite o Tamanho da sua Cidade:\n");
    scanf(" %f", &tamanho1);

    printf("Digite o PIB da sua Cidade:\n");
    scanf(" %f", &pib1);

    /*repito o mesmo processo, agora alterando para a segunda variavel*/
    printf("Digite o quantidade de Pontos Turisticos da sua Cidade:\n");
    scanf(" %d\n", &turismo1);

    printf("Agora vamos para sua segunda Carta Super Trunfu!\n\n");

    printf("Digite a Sigla que represente seu Estado:\n");
    scanf(" %s", &estado2);

    printf("Digite o Código da sua Carta:\n");
    scanf(" %s", &codigo2);

    /*vale resaltar a aprendizagem do novo %, utilizado para a sintaxe de strings com espaço*/
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", &nomedacidade2);

    printf("Digite a População da sua Cidade:\n");
    scanf(" %lld", &populacao2);

    printf("Digite o Tamanho da sua Cidade:\n");
    scanf(" %f", &tamanho2);

    printf("Digite o PIB da sua Cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite o quantidade de Pontos Turisticos da sua Cidade:\n");
    scanf(" %d\n", &turismo2);

    /*exibo o resultados de todos os dados coletados*/
    printf("Aqui estão suas Cartas Super Trunfo!\n\n");

        printf("Sua Carta Super Trunfu!\n\n");
        printf("Estado: %s\n", estado1);
        printf("Código da Carta: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nomedacidade1);
        printf("Tamanho Populacional: %lld\n", populacao1);
        printf("Área da cidade: %.3f km²\n", tamanho1);
        printf("PIB da Cidade: %.3f\n bilhões", pib1);
        printf("Pontos Turísticos da Cidade: %d\n\n", turismo1);

        printf("Sua Carta Super Trunfu!\n\n");
        printf("Estado: %s\n", estado2);
        printf("Código da Carta: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nomedacidade2);
        printf("Tamanho Populacional: %lld\n", populacao2);
        printf("Área da cidade: %.3f km²\n", tamanho2);
        printf("PIB da Cidade: %.3f bilhões\n ", pib2);
        printf("Pontos Turísticos da Cidade: %d", turismo2);

    return 0;

    /*
    print("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Impreme um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato decimal.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caracter.
    %s: Imprime uma cadeia (string) de carracteres.
    %[^\n]: Equivale a %s, porem armazena nomes compostos, ate a quebra de linha.
    %lld: Imprime um número inteiro muito grande, tem capacidade de amazenamento superior ai %d.
    */

}
