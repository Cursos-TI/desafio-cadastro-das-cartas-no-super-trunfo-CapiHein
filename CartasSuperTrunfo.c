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
    float superPoder1, superPoder2;
    int resultadoPop1, resultadoPop2, resultadoPonto1, resultadoPonto2, resultadoArea1, resultadoArea2, resultadoPib1, resultadoPib2, resultadoPibCapita1, resultadoPibCapita2, resultadoDensidade1, resultadoDensidade2, resultadoSuper1, resultadoSuper2;


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

    //Calcula a densidade populacional, PIB per Capita e Super Poder (quanto menor a densidade populacional, melhor).
    densidade1 = (float) pop1 / area1;
    densidade2 = (float) pop2 / area2;

    pib_capita1 = (float) pib1 / pop1;
    pib_capita2 = (float) pib2 / pop2;

    superPoder1 = (float) pop1 + area1 + pib1 + ponto1 + pib_capita1 + (1 / densidade1);
    superPoder2 = (float) pop2 + area2 + pib2 + ponto2 + pib_capita2 + (1 / densidade2);

    //Realiza as comparações dos valores das cartas 1 e 2, para que sejam printadas posteriormente.
    resultadoPop1 = pop1 > pop2;
    resultadoPop2 = pop2 > pop1;

    resultadoArea1 = area1 > area2;
    resultadoArea2 = area2 > area1;
    
    resultadoPib1 = pib1 > pib2;
    resultadoPib2 = pib2 > pib1;

    resultadoPonto1 = ponto1 > ponto2;
    resultadoPonto2 = ponto2 > ponto1;

    resultadoDensidade1 = densidade1 > densidade2;
    resultadoDensidade2 = densidade2 > densidade1;

    resultadoPibCapita1 = pib_capita1 > pib_capita2;
    resultadoPibCapita2 = pib_capita2 > pib_capita1;

    resultadoSuper1 = superPoder1 > superPoder2;
    resultadoSuper2 = superPoder2 > superPoder1;
    

    //Printo os valores inseridos pelo usuário, mostrando as cartas de forma separada.
    //Printo o resultado, entre parênteses, das comparações realizadas anteriormente.
    printf ("\n\nCarta 1: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", nome_cidade1);
    printf ("População: %d (%d)\n", pop1, resultadoPop1);
    printf ("Área: %.2f(%d)\n", area1, resultadoArea1);
    printf ("PIB: %.2f(%d)\n", pib1, resultadoPib1);
    printf ("Número de pontos turísticos: %d(%d)\n", ponto1, resultadoPonto1);
    printf ("A densidade populacional da cidade é: %.2f (%d)\n", densidade1, resultadoDensidade1);
    printf ("O PIB per capita da cidade é: %.2f (%d)\n\n", pib_capita1,resultadoPibCapita1);
    printf ("O Super Poder da carta é: %.2f (%d)", superPoder1, resultadoSuper1);
    
    printf ("\n\nCarta 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", nome_cidade2);
    printf ("População: %d (%d)\n", pop2, resultadoPop2);
    printf ("Área: %.2f (%d)\n", area2, resultadoArea2);
    printf ("PIB: %.2f (%d)\n", pib2, resultadoPib2);
    printf ("Número de pontos turísticos: %d (%d)\n", ponto2, resultadoPonto2);
    printf ("A densidade populacional da cidade é: %.2f (%d)\n", densidade2, resultadoPop2);
    printf ("O PIB per capita da cidade é: %.2f (%d)\n", pib_capita2, resultadoPibCapita2);
    printf ("O Super Poder da carta é: %.2f (%d)\n\n", superPoder2, resultadoSuper2);

    return 0;
}