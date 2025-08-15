#include <stdio.h>
#include <stdlib.h>

// Função para limpar a tela
void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    
    char estado[20], estado2[20], codigo[3], codigo2[3], cidade[20], cidade2[20];
    unsigned int populacao, populacao2;
    float area, area2, pib, pib2,  dp = 0, dp2 = 0, idp = 0, idp2 = 0, pibc = 0, pibc2 = 0, sup = 0, sup2 = 0;
    int npt, npt2, op, op2, op3, op4, op5, op6;

    do{
     
        printf("Bem vindo ao card super trunfo\n\n");

    printf("----- Menu-----\n\n");
    printf("1 - Modo Clássico\n");
    printf("2 - Modo Avancado\n");
    printf("3 - Regras\n");
    printf("4 - Sair\n\n");  
    printf("Digite a opcao desejada\n");
    scanf("%i", &op);

    switch (op){

    case 1:
    
    do{
      // Entrada Carta 1
    printf("Dados da carta 1\n\n");
    printf("Digite o nome do seu estado:\n");
    scanf("%20s", estado);
    printf("Digite o codigo da carta de 01 a 04:\n");
    scanf("%2s", codigo);
    printf("Digite o nome da cidade pertencente ao seu estado selecionado:\n");
    scanf("%20s", cidade);
    printf("Digite o numero total de habitantes da sua cidade:\n");
    scanf("%u", &populacao);
    printf("Digite a area total da sua cidade:\n");
    scanf("%f", &area);
    printf("Digite o pib da sua cidade:\n");
    scanf("%f", &pib);
    printf("Digite o numero total de pontos turisticos da sua cidade:\n");
    scanf("%i", &npt);

    limparTela();

    // Entrada Carta 2
    printf("Dados da carta 2\n\n");
    printf("Digite o nome do seu estado:\n");
    scanf("%20s", estado2);
    printf("Digite o codigo da carta de 01 a 04:\n");
    scanf("%2s", codigo2);
    printf("Digite o nome da cidade pertencente ao seu estado selecionado:\n");
    scanf("%20s", cidade2);
    printf("Digite o numero total de habitantes da sua cidade:\n");
    scanf("%u", &populacao2);
    printf("Digite a area total da sua cidade:\n");
    scanf("%f", &area2);
    printf("Digite o pib da sua cidade:\n");
    scanf("%f", &pib2);
    printf("Digite o numero total de pontos turisticos da sua cidade:\n");
    scanf("%i", &npt2);

    // Cálculos com proteção contra divisão por zero
    if (area != 0) dp = populacao / area;
    if (area2 != 0) dp2 = populacao2 / area2;

    if (populacao != 0) pibc = pib / populacao;
    if (populacao2 != 0) pibc2 = pib2 / populacao2;

    if (populacao != 0) idp = area / populacao;
    if (populacao2 != 0) idp2 = area2 / populacao2;

    // Super poder (mantendo sua fórmula original)
    sup = populacao + area + pib + npt + pibc + idp;
    sup2 = populacao2 + area2 + pib2 + npt2 + pibc2 + idp2;

    limparTela();

    printf("\nPressione enter para continuar...");
    getchar(); // Captura ENTER pendente do scanf anterior

    // Exibindo cartas
    printf("\n\nCarta 1:\n\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %u\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %i\n", npt);
    printf("Densidade Populacional: %.1f hab/km²\n", dp);
    printf("PIB per Capita: %.1f\n", pibc);
    printf("Super Poder: %.2f\n", sup);

    printf("\n\nCarta 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", npt2);
    printf("Densidade Populacional: %.1f hab/km²\n", dp2);
    printf("PIB per Capita: %.1f\n", pibc2);
    printf("Super Poder: %.2f\n\n", sup2);

    printf("Exibindo Resultados\n\n");

    if (populacao > populacao2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else {
        printf("Populacao: Carta 2 venceu (0)\n");
    }

    if (area > area2) {
        printf("Area: Carta 1 venceu (1)\n");
    } else {
        printf("Area: Carta 2 venceu (0)\n");
    }

    if (pib > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (npt > npt2) {
        printf("Numero de Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Numero de Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    if (dp < dp2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (pibc > pibc2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per capita: Carta 2 venceu (0)\n");
    }

    if (sup > sup2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
        break;

     printf("Deseja jogar novamente ? 1 : para sim e 2 : para nao\n\n");
     scanf("%i", &op4);

     limparTela();
    } while (op != 2);
    
   
    case 2:
    
    printf("Dados da carta 1\n\n");
    printf("Digite o nome do seu estado:\n");
    scanf("%20s", estado);
    printf("Digite o codigo da carta de 01 a 04:\n");
    scanf("%2s", codigo);
    printf("Digite o nome da cidade pertencente ao seu estado selecionado:\n");
    scanf("%20s", cidade);
    printf("Digite o numero total de habitantes da sua cidade:\n");
    scanf("%u", &populacao);
    printf("Digite a area total da sua cidade:\n");
    scanf("%f", &area);
    printf("Digite o pib da sua cidade:\n");
    scanf("%f", &pib);
    printf("Digite o numero total de pontos turisticos da sua cidade:\n");
    scanf("%i", &npt);

    limparTela();

    // Entrada Carta 2
    printf("Dados da carta 2\n\n");
    printf("Digite o nome do seu estado:\n");
    scanf("%20s", estado2);
    printf("Digite o codigo da carta de 01 a 04:\n");
    scanf("%2s", codigo2);
    printf("Digite o nome da cidade pertencente ao seu estado selecionado:\n");
    scanf("%20s", cidade2);
    printf("Digite o numero total de habitantes da sua cidade:\n");
    scanf("%u", &populacao2);
    printf("Digite a area total da sua cidade:\n");
    scanf("%f", &area2);
    printf("Digite o pib da sua cidade:\n");
    scanf("%f", &pib2);
    printf("Digite o numero total de pontos turisticos da sua cidade:\n");
    scanf("%i", &npt2);

    limparTela();

    // Exibindo cartas
    printf("\n\nCarta 1:\n\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %u\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %i\n", npt);

    printf("\n\nCarta 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", npt2);

    printf("\nPressione enter para continuar...");
    getchar(); // Captura ENTER pendente do scanf anterio

    // Cálculos com proteção contra divisão por zero
    if (area != 0) dp = populacao / area;
    if (area2 != 0) dp2 = populacao2 / area2;

    if (populacao != 0) pibc = pib / populacao;
    if (populacao2 != 0) pibc2 = pib2 / populacao2;

    if (populacao != 0) idp = area / populacao;
    if (populacao2 != 0) idp2 = area2 / populacao2;

    // Super poder (mantendo sua fórmula original)
    sup = populacao + area + pib + npt + pibc + idp;
    sup2 = populacao2 + area2 + pib2 + npt2 + pibc2 + idp2;

    limparTela();

 do{
    //Escolha de atriburtos carta 1
    printf("Escolha o atributo que deseja para ser o ataque da carta 1\n\n");
    printf("1 - PIB per Capita:\n");
    printf("2 - Super Poder:\n\n");
    scanf("%i", &op2);

    limparTela();
    
    //Escolha de atriburtos carta 2
    printf("Escolha o primiero atributo da carta 2\n\n");
    printf("1 - PIB per Capita:\n");
    printf("2 - Super Poder:\n\n");
    scanf("%i", &op3);

    limparTela();
    
    //Condicoes para definir a carta vencedora
   
    if(op2 == 1 && op3 == 1){
       
     if(pibc > pibc2){
       printf("Carta 1 foi a vencedora\n\n");
     }else{
       printf("Carta 2 foi a vencedora\n\n");
     } 
    }

    if(op2 == 2 && op3 == 2){
       
     if(sup > sup2){
       printf("Carta 1 foi a vencedora\n\n");
     }else{
       printf("Carta 2 foi a vencedora\n\n");
     }
        
    }

     if(op2 == 1 && op3 == 2){
       
     if(pibc > sup2){
       printf("Carta 1 foi a vencedora\n\n");
     }else{
       printf("Carta 2 foi a vencedora\n\n");
     }
        
    }
    
    if(op2 == 2 && op3 == 1){
       
     if(sup > pibc2){
       printf("Carta 1 foi a vencedora\n\n");
     }else{
       printf("Carta 2 foi a vencedora\n\n");
     }
        
    }
    
     printf("Deseja jogar novamente ? 1 : para sim e 2 : para nao\n\n");
     scanf("%i", &op4);

     limparTela();

 } while (op4 != 2);
  break;

  case 3:
    limparTela();
    printf("Permitido 2 jogadores\n\n");
    printf("Jogador 1 = carta 1\n\n");
    printf("Jogador 2 = carta 2\n\n");
    printf("Modo classico determina a carta vencedora apartir da qual tiver mais pontos, comprara cada atributo e da um ponto a carta que tiver o maior atrivuto ou menor a depender da regra do atributo\n\n");
    printf("Modo avancado determina a carta vencedora apartir da escolha de uqal atributo represenetara a sua carta , a carta com o maior valor daquele atributo ganhara\n\n");
  break;

  case 4:
   printf("Saindo...\n");
  break;

  default:
   printf("Opção inválida!\n");
  
   
}

     printf("Deseja voltar ao menu ? 1 : para sim e 2 : para nao\n\n");
     scanf("%i", &op5);

     limparTela();
    } while (op5 != 2);
    
    
 return 0;
}
