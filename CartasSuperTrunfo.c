#include <stdio.h>
int main () {
   
    // Variáveis da carta 1
    char estado1;
    char codigo1[30];
    char cidade1[30];
    int população1;
    float área1;
    float pib1;
    int pontos1;
    float densidadep1;
    float pibperc1;
    float superpoder1;
    float inversodensidade1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[30];
    char cidade2[30];
    int população2;
    float área2;
    float pib2;
    int pontos2;
    float densidadep2;
    float pibperc2;
    float superpoder2;
    float inversodensidade2;

    /* CADASTRO CARTA 1
    Primeira parte contendo a solicitão de informação ao usuário ocorrrendo a
    entrada de dados da carta nº1*/
    printf("Carta 1\n");
    printf("Digite uma Letra: ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite qual o número de habitantes: ");
    scanf("%d", &população1);

    printf("Área de extensão: ");
    scanf("%f", &área1);

    printf("Digite qual o PIB dessa cidade: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos:");
    scanf("%d", &pontos1);

    densidadep1 = população1 / área1;
    pibperc1 = pib1 / população1;
    inversodensidade1 = área1 / população1;
    superpoder1 = população1 + área1 + pib1 + pontos1 + pibperc1 + inversodensidade1;

    printf("\nCarta 1 registrada!\n\n ");

    /* CADASTRO CARTA 2
    Entrada de dados da Carta */

    printf("Carta 2\n");
    printf("Digite uma Letra: ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite qual o número de habitantes: ");
    scanf("%d", &população2);

    printf("Área de extensão: ");
    scanf("%f", &área2);

    printf("Digite qual o PIB dessa cidade: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos:");
    scanf("%d", &pontos2);

    densidadep2 = população2 / área2;
    pibperc2 = pib2 / população2;
    inversodensidade2 = área2 / população2;
    superpoder2 = população2 + área2 + pib2 + pontos2 + pibperc2 + inversodensidade2; 
    

    printf("\nCarta 2 registrada!\n\n ");

    /* Nessa parte do código está inserido as informaçãoes para a saída de dados
    apresentando ao usuário as informações descritas anteriormente */
    
    // EXIBIÇÃO CARTA 1
    printf("Resultado!\n");
    printf("\nCarta 1\n");  
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área (km²): %.2f km²\n", área1);  
        /*Inseri após o especificador, os caracteres "km²" para aparecer somente na 
        sáida de dados, assim, o usuário não precisa colocar essa informação no momento
        da entrada/solicitação de dados */
    printf("PIB: R$%.2f\n", pib1); 
        /*Nesse caso também inseri antes do especificador os caracateres "R$" para 
        indiciar valores em formatação de moeda ao usuário na saída de dados*/
    printf("Quantidade de pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep1);
    printf("PIB per Capita: %.2f reais\n", pibperc1);
    printf("Super Poder: %.2f\n", superpoder1);


    // EXIBIÇÃO CARTA 2
    printf("\nCarta 2\n");  
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área (km²): %.2f km²\n", área2);  
    printf("PIB: R$%.2f\n", pib2); 
    printf("Quantidade de pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n", pibperc2);
    printf("Super Poder: %.2f\n", superpoder2);
    
    //COMPARAÇÃO DAS CARTAS:
    int resultado_população;
    int resultado_área;
    int resultado_pib;
    int resultado_pontos_turisticos;
    int resultado_densidade_populacional;
    int resultado_pibpc;
    int resultado_super_poder;

    resultado_população = população1 > população2;
    resultado_área = área1 > área2;
    resultado_pib = pib1 > pib2;
    resultado_pontos_turisticos = pontos1 > pontos2;
    resultado_densidade_populacional = densidadep1 < densidadep2;
    resultado_pibpc = pibperc1 > pibperc2;
    resultado_super_poder = superpoder1 > superpoder2;

    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu\n", resultado_população);
    printf("Área: Carta %d venceu\n", resultado_área);
    printf("PIB: Carta %d venceu\n", resultado_pib);
    printf("Pontos Turísticos: Carta %d venceu\n", resultado_pontos_turisticos);
    printf("Densidade Populacional: Carta %d venceu\n", resultado_densidade_populacional);
    printf("PIB per Capita: Carta %d venceu\n", resultado_pibpc);
    printf("Super Poder: Carta %d venceu\n", resultado_super_poder);





    return 0;
    
}
