#include <stdio.h>
int main () {
   
    // Variáveis da carta 1
    char estado1[30] = "RS";
    char codigo1[30] = "A01";
    char cidade1[30] = "SAPIRANGA";
    int população1 = 76000;
    float área1 = 136;
    float pib1 = 3000000;
    int pontosturisticos1 = 10;
    float densidadep1 = 554;
    float pibperc1 = 39000;
    float inversodensidade1 = área1 / população1;
    float superpoder1 = população1 + área1 + pib1 + pontosturisticos1 + pibperc1 + inversodensidade1;

    // Variáveis da carta 2
    char estado2[30] = "RS";
    char codigo2[30] = "B01";
    char cidade2[30] = "TAQUARA";
    int população2 = 50000;
    float área2 = 480;
    float pib2 = 1400000;
    int pontosturisticos2 = 9;
    float densidadep2 = 430;
    float pibperc2 = 270000;
    float inversodensidade2 = área2 / população2;
    float superpoder2 = população2 + área2 + pib2 + pontosturisticos2+ pibperc2 + inversodensidade2; 

        int escolhaJogador1, escolhajogador2;


    //Exibição da Carta//
    printf("Primeira carta:\n");
    printf("Jogador, escolha o número do seu atributo:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("1. População: %d\n", população1);
    printf("2. Área: %.2f\n", área1);
    printf("3. PIB: %.2f\n", pib1);
    printf("4. Pontos Turísticos: %d\n", pontosturisticos1);
    printf("5. Densidade Populacional: %.2f hab/km²\n", densidadep1);
    printf("6. PIB per Capita: %.2f reais\n", pibperc1);
    printf("7. Super Poder: %.2f\n", superpoder1);
    printf("Escolha: ");
    scanf("%d", &escolhaJogador1);

    
    switch (escolhaJogador1) 
    {
    case 1:
        printf("\nAtributo Escolhido: População\n");
        printf("País Carta 1: %s - %d\n", cidade1, população1);
        printf("País Carta 2: %s - %d\n", cidade2, população2);

        if (população1 > população2){
        printf("Carta 1 venceu!\n");
    } else if (população1 < população2){
        printf("Carta 2 venceu!\n");
    } else{
        printf("Empate");
    } break;

    case 2:
        printf("\nAtributo Escolhido: Área\n");
        printf("Área Carta 1: %s - %.2f\n", cidade1, área1);
        printf("Área Carta 2: %s - %.2f\n", cidade2, área2);

        if (área1 > área2){
        printf("Carta 1 venceu!\n");
    } else if (área1 < área2){
        printf("Carta 2 venceu!\n");
    } else{
        printf("Empate");
    }  break;

    case 3:
        printf("\nAtributo Escolhido: PIB\n");
        printf("PIB Carta 1: %s - %.2f\n", cidade1, pib1);
        printf("PIB Carta 2: %s - %.2f\n", cidade2, pib2);

        if (pib1 > pib2){
        printf("Carta 1 venceu!\n");
    } else if (pib1 < pib2){
        printf("Carta 2 venceu!\n");
    } else{
        printf("Empate");
    }  break;

    case 4:
        printf("\nAtributo Escolhido: Pontos Turísticos\n");
        printf("Área Carta 1: %s - %d\n", cidade1, pontosturisticos1);
        printf("Área Carta 2: %s - %d\n", cidade2, pontosturisticos2);

        if (pontosturisticos1 > pontosturisticos2){
        printf("Carta 1 venceu!\n");
    } else if (pontosturisticos1 < pontosturisticos2){
        printf("Carta 2 venceu!\n");
    } else{
        printf("Empate");
    } break;

    case 5:
        printf("\nAtributo Escolhido: Densidade Populacional\n");
        printf("Área Carta 1: %s - %.2f hab/km²\n", cidade1, densidadep1);
        printf("Área Carta 2: %s - %.2f hab/km²\n", cidade2, densidadep2);

        if (densidadep1 < densidadep2){
        printf("Carta 1 venceu!\n");
    } else if (densidadep1 > densidadep2){
        printf("Carta 2 venceu!\n");
    } else{
        printf("Empate");
    } break;

    case 6:
        printf("\nAtributo Escolhido: PIB per Cápita\n");
        printf("Área Carta 1: %s - %.2f reais\n", cidade1, pibperc1);
        printf("Área Carta 2: %s - %.2f reais\n", cidade2, pibperc2);

        if (pibperc1 > pibperc2){
        printf("Carta 1 venceu!\n");
    } else if (pibperc1 < pibperc2){
        printf("Carta 2 venceu!\n");
    } else{
        printf("Empate");
    } break;

    case 7:
       printf("\nAtributo Escolhido: Super Poder\n");
        printf("Área Carta 1: %s - %.2f\n", cidade1, superpoder1);
        printf("Área Carta 2: %s - %.2f\n", cidade2, superpoder2);

        if (superpoder1 > superpoder2){
        printf("Carta 1 venceu!\n");
    } else if (superpoder1 < superpoder2){
        printf("Carta 2 venceu!\n");
    } else{
        printf("Empate");
    } break;

    }

return 0;

}