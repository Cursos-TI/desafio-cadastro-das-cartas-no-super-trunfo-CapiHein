#include <stdio.h>

int main() {
    //Abaixo declaro as variáveis a serem utilizadas no código.
    char estado1;
    char estado2;
    char codigo1 [4];
    char codigo2 [4];
    char nome_cidade1 [20];
    char nome_cidade2 [20];
    int pop1, pop2;
    int ponto1, ponto2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2, pib_capita1, pib_capita2;
    


    //Printo uma mensagem na tela solicitando que os usuários insiram os valores solicitados. Fiz de forma que não seja necessário dois prints para a mesma informação.
    printf ("Digite duas letras, uma para cada estado: ");
    scanf ("%c %c", &estado1, &estado2);

    printf ("Digite o código (A01, B01, etc) para cada cidade, sendo este a letra escolhida anteriormente mais um número (01 - 10): ");
    scanf ("%s %s", codigo1, codigo2);

    printf ("Digite os nomes das cidades: ");
    scanf ("%s %s", nome_cidade1, nome_cidade2);

    printf ("Insira, respectivamente, a população das cidades escolhidas: ");
    scanf ("%d %d", &pop1, &pop2);

    printf ("Digite a área das cidades: ");
    scanf ("%f %f", &area1, &area2);

    printf ("Digite o PIB das cidades: ");
    scanf ("%f %f", &pib1, &pib2);

    printf ("Insira o número de pontos turísticos: ");
    scanf ("%d %d", &ponto1, &ponto2);

    //Calcula a densidade populacional
    densidade1 = pop1 / area1;
    densidade2 = pop2 / area2;

    pib_capita1 = pib1 / pop1;
    pib_capita2 = pib2 / pop2;

    //Printo os valores inseridos pelo usuário, mostrando as cartas de forma separada
    printf ("\n\nCarta 1: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", nome_cidade1);
    printf ("População: %d\n", pop1);
    printf ("Área: %f\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Número de pontos turísticos: %d", ponto1);
    printf ("A densidade populacional da cidade é: %f", densidade1);
    printf ("O PIB per capita da cidade é: %f", pib_capita1);
    
    printf ("\n\nCarta 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", nome_cidade2);
    printf ("População: %d\n", pop2);
    printf ("Área: %f\n", area2);
    printf ("PIB: %f\n", pib2);
    printf ("Número de pontos turísticos: %d\n\n", ponto2);
    printf ("A densidade populacional da cidade é: %f", densidade2);
    printf ("O PIB per capita da cidade é: %f", pib_capita2);

    return 0;
}