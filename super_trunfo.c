#include <stdio.h>

int main (){
    
    char estado[50], estado2[50];    
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    double Densidade_Populacional, Densidade_Populacional2;
    double PIB_per_Capita, PIB_per_Capita2;
    float Super_poder, Super_poder2;
    


 // Coloque dentro do printf oque deseja que seja repassado para o exeterior após processar os codigos //
 // scanf o tipo de informação que eu espero que o usuario repasse, e a frente coloca em qual variavel deve ser armazenada//
 
printf("Digite o nome do estado: \n");
scanf(" %49[^\n]", estado);

printf("Digite o codigo da carta: \n");
scanf(" %49[^\n]", codigo);


printf("Digite o nome da cidade: \n");
scanf(" %49[^\n]", cidade);

printf("Digite o numero da populacao: \n");
scanf(" %lu",&populacao);

printf("Adicione o tamanho da área: \n");
scanf(" %lf",&area);

printf("Adicione o pib: \n");
scanf(" %lf", &pib);

printf("Adicione a quantidade dos pontos turisticos: \n");
scanf(" %d",&pontos_turisticos);

//Calculo: Carta1 //
Densidade_Populacional = (double) populacao / area;
PIB_per_Capita = (double) pib / populacao;

//Calculo Super poder: Carta 1

Super_poder = (float) populacao + area + pib + pontos_turisticos;



//A forma que o sistema vai repassar assim que o usuario inserir os dados//
 printf("\n--- CARTA1: (Local 1) ---\n");
printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("População: %lu\n", populacao);
printf("Area: %lf\n", area);
printf("Pib: %lf\n", pib);
printf("Pontos turisticos: %d\n",pontos_turisticos);
printf("Densidade Populacional: %lf\n", Densidade_Populacional);
printf("PIB per Capita: %lf\n", PIB_per_Capita);
printf("Super Poder: %f\n", Super_poder);


printf("Digite o nome do estado 2: \n");
    scanf(" %49[^\n]", estado2);

    printf("Digite o codigo da carta 2: \n");
    scanf(" %49[^\n]", codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf(" %49[^\n]", cidade2);

    printf("Digite o numero da populacao 2: \n");
    scanf(" %lu",&populacao2);

    printf("Adicione o tamanho da área 2: \n");
    scanf(" %lf",&area2);

    printf("Adicione o pib 2: \n");
    scanf(" %lf", &pib2);

    printf("Adicione a quantidade dos pontos turisticos 2: \n");
    scanf(" %d",&pontos_turisticos2);

// Calculo: CARTA 2 //
    Densidade_Populacional2 = (double) populacao2 / area2;
    PIB_per_Capita2 = (double) pib2 / populacao2;

// Calculo Super poder: Carta 2

Super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2;



// Adicionado os printf para o segundo conjunto de dados.
    printf("\n--- CARTA2: (Local 2) ---\n");
    printf("Estado2: %s\n", estado2);
    printf("Codigo2: %s\n", codigo2);
    printf("Cidade2: %s\n", cidade2);
    printf("Populacao2: %lu\n", populacao2);
    printf("Area2: %lf\n", area2);
    printf("Pib2: %lf\n", pib2);
    printf("Pontos turisticos2: %d\n",pontos_turisticos2);
    printf("Densidade Populacional2: %lf\n", Densidade_Populacional2);
    printf("PIB per Capita2: %lf\n", PIB_per_Capita2);
    printf("Super Poder 2: %f\n", Super_poder2);


// Comando para ver os resultados
int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7, resultado8;
 
// somas de comparaçoes

 resultado1 = estado > estado2;
 resultado2 = populacao > populacao2;
 resultado3 = area > area2;
 resultado4 = pib > pib2;
 resultado5 = pontos_turisticos > pontos_turisticos2;
 resultado6 = Densidade_Populacional < Densidade_Populacional2;
 resultado7 = PIB_per_Capita > PIB_per_Capita2;
 resultado8 = Super_poder > Super_poder2;


 // Imprimindo os resultados na tela
  printf("*** RESULTADO DAS COMPARAÇOES ENTRE AS CARTAS 1 E 2 ***");
  printf("Estado: Carta 1 venceu ?: %d\n", resultado1);
  printf("Populaçao: Carta 1 venceu ?: %d\n", resultado2);
  printf("Área: Carta 1 venceu ?: %d\n", resultado3);
  printf("Pib: Carta 1 venceu ?: %d\n", resultado4);
  printf("Pontos turisticos: Carta 1 venceu ?: %d\n", resultado5);
  printf("Densidade Populacional: Carta 1 venceu ?: %d\n", resultado6);
  printf("Pib per capita: Carta 1 venceu ?: %d\n", resultado7);
  printf("Super poder: Carta 1 venceu ?: %d\n", resultado8);
     





return 0;

}







